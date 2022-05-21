#pragma once

#include<string>
#include"Person.cpp"
#include"Class.hpp"

class Teacher:public Person{
public:
    Teacher(std::string name,uint16_t age,uint16_t* klass = nullptr) : Person(name,age) , klass(klass){}
    ~Teacher() = default;
    std::string Introduce() const noexcept ;


private:
    Class klass;

};