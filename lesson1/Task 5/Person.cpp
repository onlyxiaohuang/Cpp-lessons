#pragma once

#include<sstream>
#include"Person.hpp"


std::string Person::Introduce() const noexcept{
    std::stringstream stream;
    stream << "My name is " << name << ". I am " << age << " years old.";
    return stream.str();
}

std::string Person::Get_name() const noexcept
{
    return name;
}