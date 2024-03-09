#pragma once
#include <string>
#include "school.hpp"
#include <vector>
#include "student.hpp"
#include "teacher.hpp"

class School{
    public:
        void enrollStudent(Student* student);
        void hireTeacher(Teacher* teacher);
        void assignStudent(Student* student,Teacher* teacher);
        
    private:
        std::vector<Teacher*> teachers;
        std::vector<Student*> students;
};