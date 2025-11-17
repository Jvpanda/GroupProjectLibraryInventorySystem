#ifndef SHELF_H
#define SHELF_H

#include "Compartment.h"
#include <iostream>

class Shelf {
        public:
                Compartment findCompartment(int index) const;

                Compartment &operator[](int index);
                void operator<<(std::ostream &os) const;

        private:
                Compartment compartments[15];
};

#endif
