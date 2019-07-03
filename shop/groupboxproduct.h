#ifndef GROUPBOXPRODUCT_H
#define GROUPBOXPRODUCT_H

#include <QGroupBox>

namespace Ui {
class GroupBoxproduct;
}

class GroupBoxproduct : public QGroupBox
{
    Q_OBJECT

public:
    explicit GroupBoxproduct(QWidget *parent = nullptr);
    ~GroupBoxproduct();

private:
    Ui::GroupBoxproduct *ui;
};

#endif // GROUPBOXPRODUCT_H
