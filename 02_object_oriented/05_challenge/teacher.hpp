#pragma once
#include "student.hpp"
#include "teacher.hpp"

class Student;

class Teacher{
    public:
        Teacher(const std::string& name);
        void assignStudent(Student* student);

    private:
        std::string name;
        std::vector<Student*> students;

};
