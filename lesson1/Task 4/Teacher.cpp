#include<sstream>
#include"Teacher.hpp"
#include"Person.cpp"

std::string Teacher::Introduce() const noexcept{
    std::stringstream stream;
    if(klass.Get_class() != nullptr)
        stream << "I am a Teacher.I teach Class " << *klass.Get_class() <<".";
    else
        stream << "I am a Teacher.I teach No Class.";

    return Person::Introduce() + stream.str();
}
