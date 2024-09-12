import QtQuick 2.9
import QtQuick.Window 2.2
import com.tensiometer 1.0
import QtQuick.Controls
import QtQuick.Layouts 1.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Inosle View")
    Tensiometer{
        objectName: 'tensioMeter'
        anchors.horizontalCenter: parent.horizontalCenter
        width: tensiometerSize
        height: tensiometerSize
        startAngle: startAngle
        alignAngle: alignAngle
        lowestRange: lowestRange
        highestRange: highestRange
        pression: pression
        archWidth: archWidth
        outerColor: outerColor
        innerColor: innerColor
        textColor: textColor
        backgroundColor: backgroundColor

    }
}
