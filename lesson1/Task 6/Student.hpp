#pragma once
#include<string>

#include"Person.cpp"
#include"Class.cpp"


class Student: public Person
{

public:
    Student(std::string Name,uint16_t Age,uint16_t Id,Class *Klass): Person(Name,Age,Id) , klass(Klass){}
    ~Student() = default;

    std::string Introduce () const noexcept ;
    Class* Get_Class() const noexcept ;
    std::string Get_name() const noexcept ;

private:
    Class* klass;
};