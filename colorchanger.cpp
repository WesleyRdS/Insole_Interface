#include "colorchanger.h"
#include <QColor>


ColorChanger::ColorChanger(QObject *parent) : QObject(parent), m_color(QColor("lightBlue")), m_text("No Data") {}

QColor ColorChanger::color() const
{
    return m_color;
}

void ColorChanger::setColor(const QColor &color)
{
    if (m_color != color) {
        m_color = color;
        emit colorChanged();
    }
}


QString ColorChanger::text() const
{
    return m_text;
}

void ColorChanger::setText(const QString &text)
{
    if (m_text != text) {
        m_text = text;
        emit textChanged();
    }
}
