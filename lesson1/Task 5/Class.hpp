#pragma once

#include<string>

class Class{
public:
    Class(uint16_t* klass) : number(klass){}
    ~Class() = default;
    uint16_t *Get_class() const noexcept;

private:
    uint16_t *number = nullptr;
};

uint16_t *Class::Get_class() const noexcept{
    return number;
}