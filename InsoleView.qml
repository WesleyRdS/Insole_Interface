import QtQuick 2.15

Rectangle {
    width: 200
    height: 100
    color: colorChanger.color
    border.color: "black"
    border.width: 2

    Text {
        anchors.centerIn: parent
        text: colorChanger.text
        color: "white"
        font.pixelSize: 20
    }
}
