#pragma once

#include<sstream>
#include"Teacher.hpp"
#include"Person.cpp"

std::string Teacher::Introduce() const noexcept{
    std::stringstream stream;
    if(klass != nullptr)
        stream << "I am a Teacher.I teach Class " << klass->Get_class() <<".";
    else
        stream << "I am a Teacher.I teach No Class.";

    return Person::Introduce() + stream.str();
}


std::string Teacher::IntroduceWith(Student student) const noexcept{
    std::stringstream stream;

    if(klass == student.Get_Class()){
        stream << "I teach " << student.Get_name() << "." ;
    }
    else 
        stream << "I don't teach " << student.Get_name() <<".";

    return Teacher::Introduce() + stream.str();
}