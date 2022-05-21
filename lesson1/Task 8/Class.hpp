#pragma once

#include<string>
#include<vector>
//#include"Student.hpp"

class Student;
class Teacher;
class Computer;

class Class{
public:
    Class(uint16_t klass) : number(klass){}
    ~Class() = default;

    uint16_t Get_class() const noexcept;
    void AssignLeader(Student* leader,std::string name,Computer* compu) noexcept;
    Student* Ask_Leader() const noexcept;
    void AppendMember(Student* student,std::string name,Computer* compu) noexcept;
    void AppendTeacher(Teacher* teacher) noexcept;
    bool HasMember(Student* student) const noexcept;
    bool HasTeacher(Teacher* teacher) const noexcept;


private:
    uint16_t number ;
    std::vector <Student*> list;    
    std::vector <Teacher*> teacher;
    Student *leader;
};


