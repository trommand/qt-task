#include "shop.h"
#include "ui_shop.h"

class Product {
public:
    QString productName;
    int productValue;
    double productWeight;

    Product(QString _productName, int _productValue, double _productWeight){
        productName = _productName;
        productValue = _productValue;
        productWeight = _productWeight;
    }

};

//Product mleko("mleko", 600, 1.0);


shop::shop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shop)
{
    ui->setupUi(this);

    ui->label_2->setText("hello");

}

shop::~shop()
{
    delete ui;
}

void shop::on_productsMenu_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void shop::on_cartMenu_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void shop::on_settingsMenu_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}
