#include<sstream>
//#include"Person.hpp"
#include"Teacher.hpp"

Teacher::Teacher(const std::string &name,const uint16_t age,const int id,const uint16_t klass):Person(name,age,id),klass(klass){}//初始化列表
std::string Teacher::GetName() const noexcept{
    return Person::GetName();
}
uint16_t Teacher::GetAge() const noexcept{
    return Person::GetAge();
}


std::string Teacher::Introduce() const noexcept //NULL 改成nullptr
{
    std::stringstream stream;

    if( klass == 0 )
        stream <<"My name is "<< Teacher::GetName() <<".I am "<< Teacher::GetAge() <<"years old.I am a Teacher.I teach no class";
    
    else 
        stream <<"My name is "<< Teacher::GetName()<<".I am "<< Teacher::GetAge() <<"years old.I am a Teacher.I teach class "<<klass;

    return stream.str();
}
