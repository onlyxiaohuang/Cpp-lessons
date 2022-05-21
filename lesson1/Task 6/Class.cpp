#pragma once

#include<algorithm>
#include"Class.hpp"
#include"Student.hpp"

uint16_t Class::Get_class() const noexcept{
    return number;
}

void Class::AssignLeader(Student* lead) noexcept{
    leader = lead;
}

Student* Class::Ask_Leader() const noexcept{
    return leader;
}

void Class::AppendMember(Student *student) noexcept{
    list.emplace_back(student);

    auto end = std::unique( list.begin(), list.end() );
    list.erase(end,list.end());//去重
}