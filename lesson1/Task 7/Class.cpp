#pragma once

#include<iostream>
#include<algorithm>
#include"Class.hpp"
#include"Student.hpp"

uint16_t Class::Get_class() const noexcept{
    return number;
}

void Class::AssignLeader(Student* lead) noexcept{
    auto pos = find(list.begin(), list.end(), lead);
    if(pos == list.end()){
        std::cout << "It is not one of us." << std::endl;
    }
    else leader = lead;
}

Student* Class::Ask_Leader() const noexcept{
    return leader;
}

void Class::AppendMember(Student *student) noexcept{
    list.emplace_back(student);

    auto end = std::unique( list.begin(), list.end() );
    list.erase(end,list.end());//去重
}

bool Class::HasMember(Student* student) const noexcept{
    for (auto it = list.begin(); it != list.end(); ++it){
        if(*it == student)  return 1;
    }
    return 0;
}