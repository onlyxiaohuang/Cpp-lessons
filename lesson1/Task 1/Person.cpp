#include<sstream>
#include"Person.hpp"

Person::Person(std::string Name,uint16_t Age): name(Name),age(Age){}

std::string Person::Introduce() const noexcept{
    std::stringstream stream;
    stream << "My name is " << name << ". I am " << age << " years old.";
    return stream.str();
}