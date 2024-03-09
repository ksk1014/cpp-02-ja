#include "school.hpp"
#include "student.hpp"
#include "teacher.hpp"

int main(){
    School school;
    Teacher teacher("Ota-san");
    Student student("Tanaka-san");

    school.enrollStudent(&student);
    school.hireTeacher(&teacher);

    school.assignStudent(&student, &teacher);

};
