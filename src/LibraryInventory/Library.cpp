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

void Library::addItem(const Item *item, const int shelfIndex, const int compartmentIndex)
{
        if (compartmentIndex > 14 || compartmentIndex < 0 ||
                !shelves[shelfIndex][compartmentIndex].isEmpty())
        {
                throw CompartmentNotFoundException("Unable to add item.");
        }
        shelves[shelfIndex][compartmentIndex].addItem(item);
}

void Library::swap(const Item *item1, const Item *item2)
{

}

Shelf& Library::operator[](int index)
{
        return shelves[index];
}
