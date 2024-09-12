#include "tensiometer.h"
#include "QPainter"

Tensiometer::Tensiometer(QQuickItem *parent)
    :QQuickPaintedItem(parent),
    m_tensiometerSize(500),
    m_startAngle(50),
    m_alignAngle(260), //Deve ser 360 - 2*m_startAngle
    m_lowestRange(0),
    m_highestRange(4000), //E é maior valor analogico para o ADC
    m_pression(2430),
    m_archWidth(10),
    m_outerColor(QColor(12,16,247)),
    m_innerColor(QColor(51,88,255)),
    m_textColor(QColor(255,255,255)),
    m_backgroundColor(Qt::transparent)
{

}

void Tensiometer::paint(QPainter *painter)
{
    QRectF rect = this->boundingRect();
    painter->setRenderHint(QPainter::Antialiasing);
    QPen pen = painter->pen();
    pen.setCapStyle(Qt::FlatCap);

    double startAngle;
    double spanAngle;

    startAngle = m_startAngle - 190;
    spanAngle = 0 - m_alignAngle;

    //todos os arcos
    painter->save();
    pen.setWidth(m_archWidth);
    pen.setColor(m_innerColor);
    painter->setPen(pen);
    painter->drawArc(rect.adjusted(m_archWidth, m_archWidth, -m_archWidth, -m_archWidth), startAngle * 16, spanAngle * 16);
    painter->restore();

    //camada interna
    int pieSize = m_tensiometerSize/5;
    painter->save();
    pen.setWidth(m_archWidth/2);
    pen.setColor(m_outerColor);
    painter->setBrush(m_innerColor);
    painter->setPen(pen);
    painter->drawPie(rect.adjusted(pieSize, pieSize, -pieSize, -pieSize), startAngle * 16, spanAngle * 16);
    painter->restore();
}

qreal Tensiometer::getTensiometerSize()
{
    return m_tensiometerSize;
}

qreal Tensiometer::getStartAngle()
{
    return m_startAngle;
}

qreal Tensiometer::getAlignAngle()
{
    return m_alignAngle;
}

qreal Tensiometer::getLowestRange()
{
    return m_lowestRange;
}

qreal Tensiometer::getHighestRange()
{
    return m_highestRange;
}

qreal Tensiometer::getPression()
{
    return m_pression;
}

int Tensiometer::getArchWidth()
{
    return m_archWidth;
}

QColor Tensiometer::getOuterColor()
{
    return m_outerColor;
}

QColor Tensiometer::getInnerColor()
{
    return m_innerColor;
}

QColor Tensiometer::getTextColor()
{
    return m_textColor;
}

QColor Tensiometer::getBackgroundColor()
{
    return m_backgroundColor;
}



void Tensiometer::setTensiometerSize(qreal size)
{
    if(m_tensiometerSize == size)
        return;

    m_tensiometerSize = size;
    emit tensiometerSizeChanged();
}

void Tensiometer::setStartAngle(qreal startAngle)
{
    if(m_startAngle == startAngle)
        return;

    m_startAngle = startAngle;
    emit startAngleChanged();
}

void Tensiometer::setAlignAngle(qreal alignAngle)
{
    if(m_alignAngle == alignAngle)
        return;
    m_alignAngle = alignAngle;
    emit alignAngleChanged();
}

void Tensiometer::setLowestRange(qreal lowestRange)
{
    if(m_lowestRange == lowestRange)
        return;
    m_lowestRange = lowestRange;
    emit lowestRangeChanged();
}

void Tensiometer::setHighestRange(qreal highestRange)
{
    if(m_highestRange == highestRange)
        return;
    m_highestRange = highestRange;
    emit highestRangeChanged();
}

void Tensiometer::setPression(qreal pression)
{
    if(m_pression == pression)
        return;
    m_pression = pression;
    update(); //quando a pressão mudar todo desenho será atualizado
    emit pressionChanged();
}

void Tensiometer::setArchWidth(int archWidth)
{
    if(m_archWidth == archWidth)
        return;
    m_archWidth = archWidth;
    emit archWidthChanged();
}

void Tensiometer::setOuterColor(QColor outerColor)
{
    if(m_outerColor == outerColor)
        return;
    m_outerColor = outerColor;
    emit outerColorChanged();
}

void Tensiometer::setInnerColor(QColor innerColor)
{
    if(m_innerColor == innerColor)
        return;
    m_innerColor = innerColor;
    emit innerColorChanged();
}

void Tensiometer::setTextColor(QColor textColor)
{
    if(m_textColor == textColor)
        return;
    m_textColor = textColor;
    emit textColorChanged();
}

void Tensiometer::setBackgroundColor(QColor backgroundColor)
{
    if(m_backgroundColor == backgroundColor)
        return;
    m_backgroundColor = backgroundColor;
    emit backgroundColorChanged();
}
