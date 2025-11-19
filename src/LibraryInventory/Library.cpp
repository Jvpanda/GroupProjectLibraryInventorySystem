#include "Library.h"

void Library::printCheckedOut() const
{
        for (const CheckedOutItem& item : checkedOutItems)
        {
                std::cout << item << "\n";
        }
}

void Library::printStorage() const
{
        for (const Shelf& shelf : shelves)
        {
                std::cout << shelf << "\n";
        }
}

void Library::addShelf(const Shelf& shelf)
{
        shelves.emplace_back(shelf);
}

void Library::addItem(Item* item)
{

}

void Library::swap(Item* item1, Item* item2)
{

}

Shelf& Library::operator[](int index) {
        return shelves[index];
}
