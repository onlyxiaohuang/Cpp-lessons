#include<sstream>
#include"Student.hpp"


std::string Student::Introduce() const noexcept
{
    
    std::stringstream stream;
    stream << "I am at Class " << *klass.Get_class() << ".";
    return Person::Introduce() + stream.str ();
}