#pragma once

#include<vector>
#include<string>

class Class;

class Computer{
public:
//    Observer() = default;
    ~Computer() = default;

    void Notify(Class *klass) noexcept;
    bool Check(Class *klass) const noexcept;
    //virtual void Notifystudent(const Student* student,uint16_t type) const noexcept;

private:
    std::vector <Class*> kl;
};
