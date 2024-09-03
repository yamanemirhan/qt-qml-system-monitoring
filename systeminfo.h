#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include <QObject>
#include <QTimer>

class SystemInfo : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double cpuUsage READ cpuUsage NOTIFY cpuUsageChanged)
    Q_PROPERTY(double ramUsage READ ramUsage NOTIFY ramUsageChanged)
    Q_PROPERTY(double diskUsage READ diskUsage NOTIFY diskUsageChanged)
    Q_PROPERTY(QString uptime READ uptime NOTIFY uptimeChanged)
public:
    explicit SystemInfo(QObject *parent = nullptr);

    double cpuUsage() const;
    double ramUsage() const;
    double diskUsage() const;
    QString uptime() const;

signals:
    void cpuUsageChanged();
    void ramUsageChanged();
    void diskUsageChanged();
    void uptimeChanged();

public slots:
    void updateSystemInfo();
    void updateCpuUsage();
    void updateRamUsage();
    void updateDiskUsage();
    void updateUptime();

private:
    double m_cpuUsage;
    double m_ramUsage;
    double  m_diskUsage;
    QTimer m_timer;
    QString m_uptime;

};

#endif // SYSTEMINFO_H
