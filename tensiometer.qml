import QtQuick 2.9
import QtQuick.Window 2.2
import com.tensiometer 1.0
import QtQuick.Controls
import QtQuick.Layouts 1.1

Window {
    visible: true
    width: 960
    height: 1820
    title: qsTr("Inosle View")

    Image {
        id: insole
        source: "images/palmilha.png"
    }

    Tensiometer{
        objectName: 'tensioMeter0'

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
        x:175
        y:363
    }

    Tensiometer{
        objectName: 'tensioMeter1'

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
        x:175
        y:238
    }

    Tensiometer{
        objectName: 'tensioMeter2'

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
        x:422
        y:230
    }

    Tensiometer{
        objectName: 'tensioMeter3'

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
        x:422
        y:308
    }

    Tensiometer{
        objectName: 'tensioMeter4'

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
        x:422
        y:400
    }

    Tensiometer{
        objectName: 'tensioMeter5'

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
        x:628
        y:208
    }

    Tensiometer{
        objectName: 'tensioMeter6'

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
        x:628
        y:323
    }

    Tensiometer{
        objectName: 'tensioMeter7'

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
        x:628
        y:427
    }

    Tensiometer{
        objectName: 'tensioMeter8'

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
        x:827
        y:199
    }

    Tensiometer{
        objectName: 'tensioMeter9'

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
        x:827
        y:325
    }

    Tensiometer{
        objectName: 'tensioMeter10'

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
        x:827
        y:448
    }

    Tensiometer{
        objectName: 'tensioMeter11'

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
        x:1016
        y:225
    }

    Tensiometer{
        objectName: 'tensioMeter12'

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
        x:1016
        y:349
    }

    Tensiometer{
        objectName: 'tensioMeter13'

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
        x:1016
        y:460
    }

    Tensiometer{
        objectName: 'tensioMeter14'

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
        x:1187
        y:307
    }

    Tensiometer{
        objectName: 'tensioMeter15'

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
        x:1187
        y:447
    }


}
