#ifndef LISTDIALOG_H
#define LISTDIALOG_H

#include <QDialog>

namespace Ui {
class ListDialog;
}

class Book;

class ListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListDialog(QWidget *parent = nullptr);
    ~ListDialog();

    void ShowList(QVector<Book*>m_Books);

private:
    Ui::ListDialog *ui;
    Book* m_Book;

};

#endif // LISTDIALOG_H
