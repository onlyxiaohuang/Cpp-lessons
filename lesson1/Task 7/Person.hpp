#pragma once

#include<string>

class Person{
public:
    Person(std::string Name,uint16_t Age,uint16_t Id): name(Name),age(Age),id(Id){}
    ~Person() = default;

    std::string Introduce() const noexcept;
    std::string Get_name() const noexcept;
    uint16_t Get_Id() const noexcept;

private:
    uint16_t age = 0,id = 0;
    std::string name;
};
