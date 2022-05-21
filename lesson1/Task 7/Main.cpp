#include<iostream>
#include"Student.cpp"
#include"Worker.cpp"
#include"Teacher.cpp"
#include"Class.hpp"

int main(int argc,char *argv[]){
    uint16_t age,klass,leader,id;
    std::string name;

    Class kl1(1),kl2(2),kl3(3);

    Student tom("TOM",12,123,&kl1);
    Student jerry("Jerry",13,111,&kl1);
    Student tomas("Tomas",10,112,&kl2);
    Student uz("Uz",14,102,&kl2);
    Student nis("Nis",15,118,&kl3);

    kl1.AssignLeader(&tom);

    kl1.AppendMember(&tom); kl1.AppendMember(&jerry);
    kl2.AppendMember(&tomas); kl2.AppendMember(&uz);
    kl3.AppendMember(&nis);

    Teacher jason("Jason",30,233);
    std::cout << jason.Introduce() << std::endl;
    jason.AddClass(&kl1);
    std::cout << jason.Introduce() << std::endl;

    if(jason.Isteaching(&tomas))  std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    jason.AddClass(&kl2);
    std::cout << jason.Introduce() << std::endl;

    if(jason.Isteaching(&tomas))  std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;


    getchar();getchar();
    return 0;

}