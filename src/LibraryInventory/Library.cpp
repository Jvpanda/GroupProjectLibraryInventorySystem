#include "Library.h"

void Library::printCheckedOut() const
{
        for (CheckedOutItem item : checkedOutItems)
        {
                std::cout << item << "\n";
        }
}

void Library::printStorage() const
{

}

void Library::addShelf(const Shelf& shelf)
{

}

void Library::addItem(Item* item)
{

}

void Library::swap(Item& item1, Item& item2)
{

}

Shelf& Library::operator[](int index) { return shelves[index]; }
