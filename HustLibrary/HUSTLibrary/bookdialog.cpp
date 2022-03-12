#include "bookdialog.h"
#include "ui_bookdialog.h"
#include "book.h"

BookDialog::BookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookDialog)
{
    ui->setupUi(this);

    setWindowTitle(QString("Book Information"));
}

void BookDialog::Show(Book *book)
{
    ui->name->setText((book->GetName()));
    ui->author->setText((book->GetAuthor()));
    ui->category->setText((book->GetCategory()));
    ui->shelf->setText((book->GetShelf()));

    m_Book = book;
    show();
}


BookDialog::~BookDialog()
{
    delete ui;
}


void BookDialog::on_pushButton_released()
{
    m_Book->SetName(ui->name->text());
    m_Book->SetAuthor(ui->author->text());
    m_Book->SetCategory(ui->category->text());
    m_Book->SetShelf(ui->shelf->text());
    hide();
}


void BookDialog::on_pushButton_2_released()
{
    hide();
}

