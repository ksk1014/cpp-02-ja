#pragma once
#include <string>
#include <vector>
#include "teacher.hpp"

class Teacher;

class Student{
    public:
        Student(const std::string& name);

        void assignTeacher(Teacher* teacher);

    private:
        std::string name;
        std::vector<Teacher*> teachers;

};