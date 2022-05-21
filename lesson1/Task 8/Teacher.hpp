#pragma once

#include<vector>
#include<string>
#include"Person.cpp"
#include"Class.cpp"
#include"Student.cpp"

class Teacher:public Person{
public:
    Teacher(std::string name,uint16_t age,uint16_t id) : Person(name,age,id) {}
    ~Teacher() = default;

    std::string Introduce() const noexcept ;
//    std::string IntroduceWith(Student student) const noexcept ; 
    void AddClass(Class* kl) noexcept;
    bool Isteaching(Student* student) const noexcept;

private:
    std::vector <Class*> klass;

};