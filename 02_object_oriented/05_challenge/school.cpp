#include "school.hpp"

void School::enrollStudent(Student* student){
    students.push_back(student);
}

void School::hireTeacher(Teacher* teacher){
    teachers.push_back(teacher);
}

void School::assignStudent(Student* student,Teacher* teacher){
    teacher->assignStudent(student);
    student->assignTeacher(teacher);
};
