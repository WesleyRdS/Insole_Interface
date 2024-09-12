#ifndef TENSIOMETER_H
#define TENSIOMETER_H

#include <QObject>
#include <QQuickPaintedItem>

class Tensiometer : public QQuickPaintedItem
{
    Q_OBJECT

    Q_PROPERTY(qreal tensiometerSize READ getTensiometerSize WRITE setTensiometerSize NOTIFY tensiometerSizeChanged)
    Q_PROPERTY(qreal startAngle READ getstartAngle WRITE setStartAngle NOTIFY startAngleChanged)
    Q_PROPERTY(qreal alignAngle READ getalignAngle WRITE setAlignAngle NOTIFY alignAngleChanged)
    Q_PROPERTY(qreal lowestRange READ getLowestRange WRITE setLowestRange NOTIFY lowestRangeChanged)
    Q_PROPERTY(qreal highestRange READ getHighestRange WRITE setHighestRange NOTIFY highestRangeChanged)
    Q_PROPERTY(qreal pression READ Getpression WRITE setPression NOTIFY pressionChanged)
    Q_PROPERTY(int archWidth READ getArchWidth WRITE setArchWidth NOTIFY archWidthChanged)
    Q_PROPERTY(QColor outerColor READ getOuterColor WRITE setOuterColor NOTIFY outerColorChanged)
    Q_PROPERTY(QColor innerColor READ getInnerColor WRITE setInnerColor NOTIFY innerColorChanged)
    Q_PROPERTY(QColor textColor READ getTextColor WRITE setTextColor NOTIFY textColorChanged)
    Q_PROPERTY(QColor backgroundColor READ getBackgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged)


public:
    Tensiometer(QQuickItem *parent = 0);
    virtual void paint(QPainter *painter);

    qreal getTensiometerSize();
    qreal getStartAngle();
    qreal getAlignAngle();
    qreal getLowestRange();
    qreal getHighestRange();
    qreal getPression();
    int getArchWidth();
    QColor getOuterColor();
    QColor getInnerColor();
    QColor getTextColor();
    QColor getBackgroundColor();

    void setTensiometerSize(qreal size);
    void setStartAngle(qreal startAngle);
    void setAlignAngle(qreal alignAngle);
    void setLowestRange(qreal lowestRange);
    void setHighestRange(qreal highestRange);
    void setPression(qreal pression);
    void setArchWidth(int archWidth);
    void setOuterColor(QColor outerColor);
    void setInnerColor(QColor innerColor);
    void setTextColor(QColor textColor);
    void setBackgroundColor(QColor backgroundColor);


signals:
    void tensiometerSizeChanged(); //signal
    void startAngleChanged();
    void alignAngleChanged();
    void lowestRangeChanged();
    void highestRangeChanged();
    void pressionChanged();
    void archWidthChanged();
    void outerColorChanged();
    void innerColorChanged();
    void textColorChanged();
    void backgroundColorChanged();

private:
    qreal m_tensiometerSize;
    qreal m_startAngle;
    qreal m_alignAngle;
    qreal m_lowestRange;
    qreal m_highestRange;
    qreal m_pression;
    int m_archWidth;
    QColor m_outerColor;
    QColor m_innerColor;
    QColor m_textColor;
    QColor m_backgroundColor;

};

#endif // TENSIOMETER_H
