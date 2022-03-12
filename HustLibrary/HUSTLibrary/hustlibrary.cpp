#include "hustlibrary.h"
#include "ui_hustlibrary.h"
#include "book.h"
#include "bookdialog.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

HustLibrary::HustLibrary(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::HustLibrary)
{
    ui->setupUi(this);

    m_BookDialog = new BookDialog;
}

void HustLibrary::AddBook(Book *book)
{
    ui->listWidget->addItem((QListWidgetItem*) book);
    m_Books.push_back(book);
}

void HustLibrary::AddBook(QString name)
{
    Book* book = new Book(name);
    AddBook(book);
}

void HustLibrary::AddBook(QString name, QString author, QString category, QString shelf)
{
    Book* book = new Book(name, author, category, shelf);
    AddBook(book);
}

void HustLibrary::RemoveBook(Book *book)
{
    ui->listWidget->removeItemWidget((QListWidgetItem*)book);

    for(int i=0; i< m_Books.size();i++)
    {
        if(m_Books[i] == book)
        {
            m_Books.remove(i);
            delete book;
        }
    }
}

void HustLibrary::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    m_BookDialog->Show((Book*) item);
}

HustLibrary::~HustLibrary()
{
    for(int i=0; i< m_Books.size();i++)
    {
        RemoveBook(m_Books[i]);
    }
    delete ui;
    delete m_BookDialog;
}

void HustLibrary::on_pushButton_clicked()
{
    RemoveBook((Book*)ui->listWidget->currentItem());
}

void HustLibrary::on_pushButton_2_clicked()
{
    Book* book = new Book("New Book");
    m_BookDialog->Show((Book*) book);
    AddBook(book);
}

void HustLibrary::on_pushButton_3_clicked()
{
    int count=0;
    for(int i=0; i< m_Books.size();++i)
    {
        if(ui->find->text() == m_Books[i]->GetName())
        {
            QMessageBox msgBox(QMessageBox::Information,"BOOK FOUND", m_Books[i]->GetName() + " is in " + m_Books[i]->GetShelf() + " Shelf",QMessageBox::Ok);
            msgBox.exec();
            count++;
        }
        else if (ui->find->text() != m_Books[m_Books.size()-1]->GetName())
        {

            if(i == (m_Books.size()-1)&&(count==0))
            {
                QMessageBox msgBox(QMessageBox::Critical,"BOOK NOT FOUND",ui->find->text() +" is not exist!!!",QMessageBox::Ok);
                msgBox.exec();
                break;
            }
        }
    }
}

void HustLibrary::on_pushButton_4_clicked()
{

    QString FileName = QFileDialog::getOpenFileName(this,
                                                     "Upload Book's Data", "",
                                                     "Text (*.txt);;All Files(*)");
    if(FileName.isEmpty())
    {
        QMessageBox msgBox(QMessageBox::Critical,"FAIL","Open file failed",QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
        ui->listWidget->clear();
        m_Books.clear();
        QFile ifile(FileName);
        ifile.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream in(&ifile);
        while(!in.atEnd())
        {
            QString content = ifile.readLine();
            QStringList list = content.split(",");
            AddBook(list[0],list[1],list[2],list[3].remove("\n"));
        }
        ifile.close();
        QMessageBox msgBox(QMessageBox::Information,"SUCCESSED","Read Book Data Successed",QMessageBox::Ok);
        msgBox.exec();
    }


}

void HustLibrary::on_pushButton_5_clicked()
{
    QString FileName = QFileDialog::getSaveFileName(this,
                                                     "Upload Book's Data", "",
                                                     "Text (*.txt);;All Files(*)");
    if(FileName.isEmpty())
    {
        QMessageBox msgBox(QMessageBox::Critical,"FAIL","Open file failed",QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
        QFile ofile(FileName);
        ofile.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&ofile);
    for(int i=0; i< m_Books.size();++i)
    {
        out << m_Books[i]->GetName();
        out << ",";
        out << m_Books[i]->GetAuthor();
        out << ",";
        out << m_Books[i]->GetCategory();
        out << ",";
        out << m_Books[i]->GetShelf();
        out << "\n";
    }
    ofile.close();
    QMessageBox msgBox(QMessageBox::Information,"SUCCESSED","Uploaded Book Data Successed",QMessageBox::Ok);
    msgBox.exec();
    }

}
