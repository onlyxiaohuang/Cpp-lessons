#pragma once

#include<string>

class Person{
public:
    Person(const std::string name,const uint16_t age);
    ~Person() = default;

    std::string Introduce() const noexcept;



private:
    uint16_t age;
    std::string name;
};
