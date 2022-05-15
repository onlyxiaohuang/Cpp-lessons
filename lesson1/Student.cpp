#include<sstream>
#include"Student.hpp"



Student::Student(const std::string &name,const uint16_t age,const int id,const uint16_t klass):Person(name,age,id),klass(klass){}//初始化列表

std::string Student::GetName() const noexcept{
    return Person::GetName();
}
uint16_t Student::GetAge() const noexcept{
    return Person::GetAge();
}

std::string Student::Introduce() const noexcept
{
    std::stringstream stream;
    stream <<"My name is "<< Student::GetName() <<".I am "<< Person::GetAge() <<"years old.";

    return stream.str();
}