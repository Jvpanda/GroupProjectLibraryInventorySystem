#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item {
        public:
                // Getters
                std::string getName() const;
                std::string getDescription() const;
                int getId() const;

                // Setters
                void setName(const std::string &name);
                void setDescription(const std::string &description);
                void setId(int id);

                virtual void print() const                      = 0;
                virtual void operator<<(std::ostream &os) const = 0;

        private:
                std::string name;
                std::string description;
                int id;
};

#endif
