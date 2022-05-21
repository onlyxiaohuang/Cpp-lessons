#pragma once

#include<sstream>
#include"Teacher.hpp"
#include"Person.cpp"

std::string Teacher::Introduce() const noexcept{
    std::stringstream stream;
    if(klass.size()){
        stream << "I am a Teacher.I teach Class ";
        for(auto it = klass.begin() ; it != klass.end(); ++it){
            stream << ( (*it) -> Get_class());
            if( next(it) != klass.end() )   stream << ",";
        }
        stream << ".";
    }
    else
        stream << "I am a Teacher.I teach No Class.";
    
    return Person::Introduce() + stream.str();
}

void Teacher::AddClass(Class *kl) noexcept{
    klass.emplace_back( kl );
    auto end = std::unique ( klass.begin(), klass.end() );
    klass.erase( end, klass.end() );
//    std::sort( klass.begin(),klass.end() );
}

bool Teacher::Isteaching(Student* student) const noexcept{
    for(auto it = klass.begin(); it != klass.end(); ++ it){
        if( (*it) -> HasMember(student))   return 1;
    }
    return 0;
}

/*
std::string Teacher::IntroduceWith(Student student) const noexcept{
    std::stringstream stream;

    if(klass == student.Get_Class()){
        stream << "I teach " << student.Get_name() << "." ;
    }
    else 
        stream << "I don't teach " << student.Get_name() <<".";

    return Teacher::Introduce() + stream.str();
}*/