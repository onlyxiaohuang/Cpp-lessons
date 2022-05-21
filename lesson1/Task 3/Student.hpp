#pragma once
#include<string>
#include"Person.cpp"

class Student: public Person
{

public:
    Student(std::string Name,uint16_t Age,uint16_t Klass): Person(Name,Age) , klass(Klass){}
    ~Student() = default;

    std::string Introduce () const noexcept ;

private:
    uint16_t klass;

};