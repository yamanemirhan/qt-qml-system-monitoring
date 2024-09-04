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
    Q_PROPERTY(double networkUsage READ networkUsage NOTIFY networkUsageChanged)
public:
    explicit SystemInfo(QObject *parent = nullptr);

    double cpuUsage() const;
    double ramUsage() const;
    double diskUsage() const;
    QString uptime() const;
    double networkUsage() const;

signals:
    void cpuUsageChanged();
    void ramUsageChanged();
    void diskUsageChanged();
    void uptimeChanged();
    void networkUsageChanged();

public slots:
    void updateSystemInfo();
    void updateCpuUsage();
    void updateRamUsage();
    void updateDiskUsage();
    void updateUptime();
    void updateNetworkUsage();

private:
    double m_cpuUsage;
    double m_ramUsage;
    double  m_diskUsage;
    QTimer m_timer;
    QString m_uptime;
    double m_networkUsage;
};

#endif // SYSTEMINFO_H
