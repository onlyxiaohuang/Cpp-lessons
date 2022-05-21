#pragma once

#include<string>

class Person{
public:
    Person(std::string Name,uint16_t Age): name(Name),age(Age){}
    ~Person() = default;

    std::string Introduce() const noexcept;
    std::string Get_name() const noexcept;

private:
    uint16_t age;
    std::string name;
};
