#include "project.hpp"
#include <iostream>

// Project::Project(Team team)
// :team(team)
// {};
Project::Project() {};

void Project::add_team_member(Person person){
    team.add_member(person);
};

void Project::print_team_members() const {
    std::vector<Person> members = team.get_members();
    for(const Person& member: members) {
        std::cout << member.get_name() << std::endl;
    }
}



