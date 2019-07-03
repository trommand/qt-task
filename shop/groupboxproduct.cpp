#include "groupboxproduct.h"
#include "ui_groupboxproduct.h"

GroupBoxproduct::GroupBoxproduct(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::GroupBoxproduct)
{
    ui->setupUi(this);
}

GroupBoxproduct::~GroupBoxproduct()
{
    delete ui;
}
