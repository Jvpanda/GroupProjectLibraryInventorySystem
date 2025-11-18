#ifndef BOOK_H
#define BOOK_H

#include "Item.h"
#include <string>

class Book : public Item {
        public:
                // Getters
                std::string getTitle() const;
                std::string getAuthor() const;
                std::string getCopyrightDate() const;

                // Setters
                void setTitle(const std::string &title);
                void setAuthor(const std::string &author);
                void setCopyrightDate(const std::string &copyrightDate);

                void print() const override;
                friend std::ostream& operator<<(std::ostream& os, Book& book);

        private:
                std::string title;
                std::string author;
                std::string copyrightDate;
};

#endif
