#ifndef COLORCHANGER_H
#define COLORCHANGER_H

#include <QObject>
#include <QColor>

class ColorChanger : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
    explicit ColorChanger(QObject *parent = nullptr);

    QColor color() const;
    void setColor(const QColor &color);

    QString text() const;
    void setText(const QString &text);

signals:
    void colorChanged();
    void textChanged();

private:
    QColor m_color;
    QString m_text;
};

#endif // COLORCHANGER_H
