#include "poplayer.h"
#include "./ui_poplayer.h"

Poplayer::Poplayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Poplayer)
{
    ui->setupUi(this);
}

Poplayer::~Poplayer()
{
    delete ui;
}

