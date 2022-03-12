#include "listdialog.h"
#include "ui_listdialog.h"
#include "book.h"

ListDialog::ListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListDialog)
{
    ui->setupUi(this);
}

void ListDialog::ShowList(QVector<Book*>m_Books)
{
    ui->listWidget1->addItem(m_Books[1]);
}


ListDialog::~ListDialog()
{
    delete ui;
}
