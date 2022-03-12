#ifndef HUSTLIBRARY_H
#define HUSTLIBRARY_H

#include <QWidget>
#include <QString>
#include <QVector>
#include "book.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HustLibrary; }
QT_END_NAMESPACE

class QListWidgetItem;
class BookDialog;

class HustLibrary : public QWidget
{
    Q_OBJECT

public:
    HustLibrary(QWidget *parent = nullptr);
    ~HustLibrary();

    void AddBook(Book* book);
    void AddBook(QString name);
    void AddBook(QString name, QString author, QString category, QString shelf);

    void RemoveBook(Book* book);

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::HustLibrary *ui;

    QVector<Book*>m_Books;

    BookDialog* m_BookDialog;
};
#endif // HUSTLIBRARY_H
