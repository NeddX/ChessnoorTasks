#include "Qool.h"

#include <qmessagebox.h>

Qool::Qool(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

Qool::~Qool()
{}

void Qool::on_button_clicked()
{
    QMessageBox::information(this, "Ditt namn ar", "Greetings, " + m_Name + ".", QMessageBox::Ok);
}


void Qool::on_nameBox_textChanged()
{
    m_Name = ui.nameBox->toPlainText();
}

