#ifndef BOOKDIALOG_H
#define BOOKDIALOG_H

#include <QDialog>

namespace Ui {
class BookDialog;
}

class Book;

class BookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookDialog(QWidget *parent = nullptr);
    ~BookDialog();

    void Show(Book* book);


private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::BookDialog *ui;

    Book* m_Book;

};

#endif // BOOKDIALOG_H
