#pragma once
#include<stdint.h>
#include"Student.hpp"

class Klass
{    
public:
    explicit Klass(const uint16_t id);//构造

    uint16_t Id()const noexcept;//业务
    void AssignLeader();
    


private://属性
    uint64_t id;
    Student leader;
};