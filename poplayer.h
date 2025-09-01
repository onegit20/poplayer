#ifndef POPLAYER_H
#define POPLAYER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Poplayer; }
QT_END_NAMESPACE

class Poplayer : public QWidget
{
    Q_OBJECT

public:
    Poplayer(QWidget *parent = nullptr);
    ~Poplayer();

private:
    Ui::Poplayer *ui;
};
#endif // POPLAYER_H
