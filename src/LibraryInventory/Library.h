#ifndef LIBRARY_H
#define LIBRARY_H

#include "../Item/CheckedOutItem.h"
#include "Shelf.h"
#include <vector>

class Library {
        public:
                void printCheckedOut() const;
                void printStorage() const;
                void addShelf(const Shelf &shelf);
                void addItem(Item *item);
                void swap(Item& item1, Item& item2);
                Shelf &operator[](int index);

        private:
                std::vector<Shelf> shelves;
                std::vector<CheckedOutItem> checkedOutItems;
};

#endif
