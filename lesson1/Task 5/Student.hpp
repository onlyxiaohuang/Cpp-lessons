#pragma once
#include<string>
#include"Person.cpp"
#include"Class.hpp"

class Student: public Person
{

public:
    Student(std::string Name,uint16_t Age,uint16_t *Klass): Person(Name,Age) , klass(Klass){}
    ~Student() = default;

    std::string Introduce () const noexcept ;
    Class Get_Class() const noexcept ;
    std::string Get_name() const noexcept ;

private:
    Class klass;
};