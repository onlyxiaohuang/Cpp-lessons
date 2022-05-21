#pragma once

#include<sstream>
#include"Student.hpp"


std::string Student::Introduce() const noexcept
{
    
    std::stringstream stream;
    stream << "I am at Class " << klass->Get_class() << ".";
    
    if( this == klass->Ask_Leader())    stream << "I am Leader of Class " << klass->Get_class() << ".";
    return Person::Introduce() + stream.str ();
}

std::string Student::Get_name() const noexcept
{
    return Person::Get_name();
}

Class * Student::Get_Class() const noexcept
{
    return klass;
}