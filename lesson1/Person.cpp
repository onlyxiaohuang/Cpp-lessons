#include<sstream>
#include"Person.hpp"

Person::Person(const std::string &name,const uint16_t age,int id):name(name),age(age),id(id){}


std::string Person::Introduce() const noexcept
{
    std::stringstream stream;

    stream <<"My name is "<<name<<".I am "<< age <<"years old.";

    return stream.str();
}
/*
std::string Student::Introduce(){
    std::stringstream stream;

    stream <<"My name is "<<name<<".I am"<< age <<"years old.";

}
*/