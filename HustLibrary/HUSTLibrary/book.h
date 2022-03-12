#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QListWidgetItem>

class Book : public QListWidgetItem
{
public:
    Book(){}
    Book(QString name);
    Book(QString name,QString author, QString category, QString shelf);
    ~Book(){ };

    void SetName(QString name);
    void SetAuthor(QString author);
    void SetCategory(QString category);
    void SetShelf(QString shelf);

    QString GetName();
    QString GetAuthor();
    QString GetCategory();
    QString GetShelf();

private:
    QString m_Author;
    QString m_Category;
    QString m_Shelf;
};

inline void Book::SetName(QString name)
{
    QListWidgetItem::setText(name);
}

inline void Book::SetAuthor(QString author)
{
    m_Author = author;
}

inline void Book::SetCategory(QString category)
{
    m_Category = category;
}

inline void Book::SetShelf(QString shelf)
{
    m_Shelf = shelf;
}

inline QString Book::GetName()
{
    return QListWidgetItem::text();
}

inline QString Book::GetAuthor()
{
    return m_Author;
}

inline QString Book::GetCategory()
{
    return m_Category;
}

inline QString Book::GetShelf()
{
    return m_Shelf;
}

#endif // BOOK_H
