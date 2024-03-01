#include "person.hpp"
#include <vector>

class Team{
    public:
        Team();
        void add_member(Person member);
        std::vector<Person> get_members() const;
    // private:
        std::vector<Person> members;
};