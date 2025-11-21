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

void Library::addItem(Item *item, const int shelfIndex, const int compartmentIndex)
{
        try
        {
                (*this)[shelfIndex][compartmentIndex].addItem(item);
        }
        catch (std::exception e)
        {
                std::cout << "Compartment Does Not Exist.\n";
        }
}

void Library::swap(int itemOneShelfIndex, int itemOneCompIndex,
                   int itemTwoShelfIndex, int itemTwoCompIndex)
{
        Compartment &compartment1 = (*this)[itemOneShelfIndex][itemOneCompIndex];
        Compartment &compartment2 = (*this)[itemTwoShelfIndex][itemTwoCompIndex];

        Item *item1;
        Item *item2;

        try
        {
                item1 = compartment1.removeItem();
                item2 = compartment2.removeItem();
        }
        catch (std::exception e)
        {
                std::cout << "One of the items do not exist.\n";
                return;
        }

        compartment1.setHasOwner(false);
        compartment2.setHasOwner(false);

        compartment1.addItem(item2);
        compartment2.addItem(item1);
}

Shelf& Library::operator[](int index)
{
        try
        {
                return shelves[index];
        }
        catch (std::exception e)
        {
                std::cout << "Shelf Does Not Exist.\n";
        }
}
