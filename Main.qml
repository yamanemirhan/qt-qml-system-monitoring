import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
ApplicationWindow {
    width: 600
    height: 480
    visible: true
    title: qsTr("System Info")

    font.pixelSize: 16

    GridLayout {
        columns: 3
        anchors.fill: parent
        rowSpacing: 20
        columnSpacing: 20

        ColumnLayout {
            Layout.alignment: Qt.AlignCenter
            spacing: 10

            Rectangle {
                width: 60
                height: 60

                Image {
                    source: "cpu_icon.png"
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectFit
                }
            }

            Text {
                text: "CPU Usage"
                font.bold: true
                horizontalAlignment: Text.AlignHCenter
            }

            ProgressBar {
                value: systemInfo.cpuUsage / 100.0
                width: 100
                height: 10
                from: 0
                to: 1
            }

            Text {
                text: systemInfo.cpuUsage.toFixed(2) + "%"
                font.pixelSize: 14
                horizontalAlignment: Text.AlignHCenter
            }

        }

        ColumnLayout {
            Layout.alignment: Qt.AlignCenter
            spacing: 10

            Rectangle {
                width: 60
                height: 60

                Image {
                    source: "ram_icon.png"
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectFit
                }
            }

            Text {
                text: "RAM Usage"
                font.bold: true
                horizontalAlignment: Text.AlignHCenter
            }

            ProgressBar {
                value: systemInfo.ramUsage / 100.0
                width: 100
                height: 10
                from: 0
                to: 1
            }

            Text {
                text: systemInfo.ramUsage.toFixed(2) + "%"
                font.pixelSize: 14
                horizontalAlignment: Text.AlignHCenter
            }

        }

        ColumnLayout {
            Layout.alignment: Qt.AlignCenter
            spacing: 10

            Rectangle {
                width: 60
                height: 60

                Image {
                    source: "disk_icon.png"
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectFit
                }
            }

            Text {
                text: "DISK Usage"
                font.bold: true
                horizontalAlignment: Text.AlignHCenter
            }

            ProgressBar {
                value: systemInfo.diskUsage / 100.0
                width: 100
                height: 10
                from: 0
                to: 1
            }

            Text {
                text: systemInfo.diskUsage.toFixed(2) + "%"
                font.pixelSize: 14
                horizontalAlignment: Text.AlignHCenter
            }

        }
    }
}
