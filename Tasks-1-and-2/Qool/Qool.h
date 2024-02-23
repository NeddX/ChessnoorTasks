#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qool.h"

class Qool : public QMainWindow
{
    Q_OBJECT

public:
    Qool(QWidget *parent = nullptr);
    ~Qool();

private slots:
    void on_button_clicked();

    void on_nameBox_textChanged();

private:
    Ui::QoolClass ui;
    QString m_Name;
};
