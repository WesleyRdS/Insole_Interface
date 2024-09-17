import QtQuick 2.9
import QtQuick.Window 2.2
import com.tensiometer 1.0
import QtQuick.Controls
import QtQuick.Layouts 1.1

Window {
    visible: true
    width: 600
    height: 600

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
        x:96
        y:470

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
        x:165
        y:470
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
        x:77
        y:358
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
        x:127
        y:358
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
        x:175
        y:358
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
        x:78
        y:270
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
        x:128
        y:270
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
        x:178
        y:270
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
        x:83
        y:179
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
        x:141
        y:179
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
        x:197
        y:179
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
        x:97
        y:98
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
        x:152
        y:98
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
        x:205
        y:98
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
        x:133
        y:26
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
        x:194
        y:26
    }

    Tensiometer{
        objectName: 'tensioMeter16'

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
        x: 463
        y: 470
    }

    Tensiometer{
        objectName: 'tensioMeter17'

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
        x: 389
        y: 470
    }

    Tensiometer{
        objectName: 'tensioMeter18'

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
        x: 472
        y: 358
    }

    Tensiometer{
        objectName: 'tensioMeter19'

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
        x: 422
        y: 358
    }

    Tensiometer{
        objectName: 'tensioMeter20'

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
        x: 374
        y: 358
    }

    Tensiometer{
        objectName: 'tensioMeter21'

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
        x: 476
        y: 270
    }

    Tensiometer{
        objectName: 'tensioMeter22'

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
        x: 426
        y: 270
    }

    Tensiometer{
        objectName: 'tensioMeter23'

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
        x: 376
        y: 270
    }

    Tensiometer{
        objectName: 'tensioMeter24'

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
        x: 471
        y: 179
    }

    Tensiometer{
        objectName: 'tensioMeter25'

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
        x: 413
        y: 179
    }

    Tensiometer{
        objectName: 'tensioMeter26'

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
        x: 357
        y: 179
    }

    Tensiometer{
        objectName: 'tensioMeter27'

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
        x: 457
        y: 98
    }

    Tensiometer{
        objectName: 'tensioMeter28'

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
        x: 402
        y: 98
    }

    Tensiometer{
        objectName: 'tensioMeter29'

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
        x: 349
        y: 98
    }

    Tensiometer{
        objectName: 'tensioMeter30'

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
        x: 421
        y: 26
    }


    Tensiometer{
        objectName: 'tensioMeter31'

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
        x: 360
        y: 26
    }


}
