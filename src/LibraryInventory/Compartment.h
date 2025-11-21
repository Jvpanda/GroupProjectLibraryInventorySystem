#ifndef COMPARTMENT_H
#define COMPARTMENT_H

#include "../Item/Item.h"

class Compartment {
        public:
                // Getters
                Item *getStoredItem() const;
                bool getHasOwner() const;

                // Setters
                void addItem(const Item *item);
                Item *removeItem();
                void setHasOwner(bool ownerStatus);

                bool isEmpty() const;

        private:
                Item *storedItem;
                bool hasOwner;
};

#endif
