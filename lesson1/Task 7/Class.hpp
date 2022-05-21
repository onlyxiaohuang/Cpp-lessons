#pragma once

#include<string>
#include<vector>
//#include"Student.hpp"

class Student;

class Class{
public:
    Class(uint16_t klass) : number(klass){}
    ~Class() = default;

    uint16_t Get_class() const noexcept;
    void AssignLeader(Student* leader) noexcept;
    Student* Ask_Leader() const noexcept;
    void AppendMember(Student* student) noexcept;
    bool HasMember(Student* student) const noexcept;

private:
    uint16_t number ;
    std::vector <Student*> list;    
    Student *leader;
};


