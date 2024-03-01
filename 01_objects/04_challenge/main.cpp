#include "project.hpp"
#include "person.hpp"

int main() {
    Person pochi = Person("pochi");
    Person tama = Person("tama");
    Person mike = Person("mike");

    Project project = Project();

    project.add_team_member(pochi);
    project.add_team_member(tama);
    project.add_team_member(mike);

    project.print_team_members();
    
    return 0;
}