#include<sstream>
#include"Teacher.hpp"
#include"Person.cpp"

std::string Teacher::Introduce() const noexcept{
    std::stringstream stream;
    if(klass)
        stream << "I am a Teacher.I teach Class " << klass <<".";
    else
        stream << "I am a Teacher.I teach No Class.";

    return Person::Introduce() + stream.str();
}
