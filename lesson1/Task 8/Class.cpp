#pragma once

#include<iostream>
#include<algorithm>
#include"Class.hpp"
#include"Student.cpp"
#include"Teacher.cpp"
#include"Computer.cpp"

uint16_t Class::Get_class() const noexcept{
    return number;
}

void Class::AssignLeader(Student* lead,std::string name,Computer* compu) noexcept{
    auto pos = find(list.begin(), list.end(), lead);
    if(pos == list.end()){
        std::cout << "It is not one of us." << std::endl;
        return ;
    }
    else leader = lead;

 //   if( compu->Check(this) )    std:: cout << "I am the Machine.I know "<< name <<" become Leader of Class " << number << "." << std::endl;

    if( this->teacher.size() == 0 ) return ;
    for( auto it = this->teacher.begin() ;it != this->teacher.end(); ++it ){
        std:: cout << "I am "<< ( (*it) -> Person::Get_name()) << ".I know "<< name << " become Leader of Class " << number << "." << std::endl;
    }
}

Student* Class::Ask_Leader() const noexcept{
    return leader;
}

void Class::AppendMember(Student *student,std::string name,Computer* compu) noexcept{
    list.emplace_back(student);

    auto end = std::unique( list.begin(), list.end() );
    list.erase(end,list.end());//去重

 //   std::cout << number << " " << this << std::endl;
    if( compu->Check(this) )    std:: cout << "I am the Machine.I know "<< name <<" has joined Class " << number << "." << std::endl;

    if( this->teacher.size() == 0 ) return ;
    for( auto it = this->teacher.begin() ;it != this->teacher.end(); ++it ){
        std:: cout << "I am "<< ( (*it) -> Person::Get_name()) << ".I know "<< name << " has joined Class " << number << "." << std::endl;
    }

}

void Class::AppendTeacher(Teacher *teacher) noexcept{
    this->teacher.push_back(teacher);
}

bool Class::HasMember(Student* student) const noexcept{
    for (auto it = list.begin(); it != list.end(); ++it){
        if(*it == student)  return 1;
    }
    return 0;
}
