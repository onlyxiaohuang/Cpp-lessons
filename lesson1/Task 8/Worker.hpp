#pragma once
#include<string>
#include"Person.cpp"

class Worker: public Person
{

public:
    Worker(std::string Name,uint16_t Age,uint16_t Id): Person(Name,Age,Id) {}
    ~Worker() = default;

    std::string Introduce () const noexcept ;

};