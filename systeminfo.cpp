#include "systeminfo.h"
#include <QProcess>
#include <QDebug>
#include <QFile>
#include <fstream>
#include <string>
#include <sstream>
#include <sys/statvfs.h>

SystemInfo::SystemInfo(QObject *parent)
    : QObject{parent}, m_cpuUsage(0), m_ramUsage(0), m_diskUsage(0)
{
    connect(&m_timer, &QTimer::timeout, this, &SystemInfo::updateSystemInfo);
    m_timer.start(1000);
}

double SystemInfo::cpuUsage() const {
    return m_cpuUsage;
}
double SystemInfo::ramUsage() const {
    return m_ramUsage;
}
double SystemInfo::diskUsage() const {
    return m_diskUsage;
}
QString SystemInfo::uptime() const {
    return m_uptime;
}

void SystemInfo::updateSystemInfo() {
    updateCpuUsage();
    updateRamUsage();
    updateDiskUsage();
}

void SystemInfo::updateCpuUsage(){
    std::ifstream file("/proc/stat");
    std::string line;
    if (std::getline(file, line)){
        std::istringstream iss(line);
        std::string cpu;
        long user, nice, system, idle;
        iss >> cpu >> user >> nice >> system >> idle;
        long total = user + nice + system + idle;
        long idleTime = idle;

        m_cpuUsage = 100.0 * (1.0 - ((double)idleTime / (double)total));
        emit cpuUsageChanged();
    }
}

void SystemInfo::updateRamUsage(){
    std::ifstream file("/proc/meminfo");
    std::string line;
    long memTotal = 0;
    long memAvailable = 0;
    long memFree = 0;
    long buffers = 0;
    long cached = 0;

    while (std::getline(file, line)){
        std::istringstream iss(line);
        std::string key;
        long value;

        iss >> key >> value;

        if(key == "MemTotal:"){
            memTotal = value;
        } else if (key == "MemFree:"){
            memFree = value;
        }
        else if (key == "Buffers:"){
            buffers = value;
        }
        else if (key == "Cached:"){
            cached = value;
        }
        if (memTotal > 0 && memFree > 0 && buffers > 0 && cached > 0) {
            break;
        }
    }

    long usedMemory = memTotal - (memFree + buffers + cached);
    m_ramUsage = 100.0 * (double)usedMemory / (double)memTotal;

    emit ramUsageChanged();
}

void SystemInfo::updateDiskUsage(){
    struct statvfs stat;
    if(statvfs("/", &stat) != 0){
        return;
    }
    long totalDisk = stat.f_blocks * stat.f_frsize;
    long freeDisk = stat.f_bfree * stat.f_frsize;
    long usedDisk = totalDisk - freeDisk;
    m_diskUsage = 100.0 * (double)usedDisk / (double)totalDisk;

    emit diskUsageChanged();
}

void SystemInfo::updateUptime() {
    QFile file("/proc/uptime");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString line = in.readLine();
        QStringList uptimeData = line.split(" ");
        if(!uptimeData.isEmpty()){
            bool ok;
            double uptimeSeconds = uptimeData[0].toDouble(&ok);
            if(ok) {
                int days = static_cast<int>(uptimeSeconds / 86400);
                int hours = static_cast<int>((uptimeSeconds - (days * 86400)) / 3600);
                int minutes = static_cast<int>((uptimeSeconds - (days * 86400) - (hours * 3600)) / 60);
                int seconds = static_cast<int>(uptimeSeconds) % 60;

                m_uptime = QString("%1 days, %2 hours, %3 minutes, %4 seconds").arg(days).arg(hours).arg(minutes).arg(seconds);
                emit uptimeChanged();
            }
        }
        file.close();
    }
}
