#include "book.h"

Book::Book(QString name)
    : QListWidgetItem(name)
{

}

Book::Book(QString name,QString author, QString category, QString shelf)
    : QListWidgetItem(name),
      m_Author(author),
      m_Category(category),
      m_Shelf(shelf)
{

}
