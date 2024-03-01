#include <vector>
#include "team.hpp"

Team::Team(){};

void Team::add_member(Person member){
    members.push_back(member);
};

std::vector<Person> Team::get_members() const {
    return members;
};