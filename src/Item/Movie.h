#ifndef MOVIE_H
#define MOVIE_H

#include "Item.h"
#include <string>
#include <vector>

class Movie : public Item {
        public:
                // Getters
                std::string getTitle() const;
                std::string getDirector() const;
                std::vector<std::string> getMainActors() const;

                // Setters
                void setTitle(const std::string &title);
                void setDirector(const std::string &director);
                void setMainActors(const std::vector<std::string> &actors);

                void operator<<(std::ostream &os) const override;

        private:
                std::string title;
                std::string director;
                std::vector<std::string> mainActors;
};

#endif
