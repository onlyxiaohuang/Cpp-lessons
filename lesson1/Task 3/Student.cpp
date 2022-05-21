#include<sstream>
#include"Student.hpp"


std::string Student::Introduce() const noexcept
{
    
    std::stringstream stream;
    stream << "I am at Class " << klass << ".";
    return Person::Introduce() + stream.str ();
}