#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Item.h"
#include <string>

class Magazine : public Item {
        public:
                // Getters
                std::string getEdition() const;
                std::string getTitleOfMain() const;

                // Setters
                void setEdition(const std::string &edition);
                void setTitleOfMain(const std::string &title);

                void print() const override;
                void operator<<(std::ostream &os) const override;

        private:
                std::string edition;
                std::string titleOfMain;
};

#endif
