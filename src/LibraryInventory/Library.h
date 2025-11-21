#ifndef LIBRARY_H
#define LIBRARY_H

#include "../Item/CheckedOutItem.h"
#include "Shelf.h"
#include "../Exceptions.h"
#include <vector>

class Library
{
        public:
                void printCheckedOut() const;
                void printStorage() const;
                void addShelf(const Shelf &shelf);
                void addItem(const Item *item, const int shelfIndex, const int compartmentIndex);
                void swap(const Item *item1, const Item *item2);
                Shelf &operator[](int index);

        private:
                std::vector<Shelf> shelves;
                std::vector<CheckedOutItem> checkedOutItems;
};

#endif
