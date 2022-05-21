#pragma once
#include<string>
#include"Person.cpp"

class Worker: public Person
{

public:
    Worker(std::string Name,uint16_t Age): Person(Name,Age) {}
    ~Worker() = default;

    std::string Introduce () const noexcept ;

};