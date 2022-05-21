#pragma once

#include<string>
#include"Person.cpp"
#include"Class.cpp"
#include"Student.cpp"

class Teacher:public Person{
public:
    Teacher(std::string name,uint16_t age,uint16_t id,Class* klass) : Person(name,age,id) , klass(klass){}
    ~Teacher() = default;

    std::string Introduce() const noexcept ;
    std::string IntroduceWith(Student student) const noexcept ; 

private:
    Class* klass;

};