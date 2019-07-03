#ifndef SHOP_H
#define SHOP_H

#include <QMainWindow>

namespace Ui {
class shop;
}

class shop : public QMainWindow
{
    Q_OBJECT

public:
    explicit shop(QWidget *parent = nullptr);
    ~shop();

private slots:
    void on_productsMenu_triggered();

    void on_cartMenu_triggered();

    void on_settingsMenu_triggered();

private:
    Ui::shop *ui;
};

#endif // SHOP_H
