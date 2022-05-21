#include<iostream>
#include"Student.cpp"
#include"Worker.cpp"
#include"Teacher.cpp"
#include"Class.hpp"

int main(int argc,char *argv[]){
    uint16_t age,klass,leader,id;
    std::string name;
    std::cin >> age >> name >> id >> klass >> leader;

   

    Class kl(2);
    Student student(name,age,id,&kl);

    kl.AssignLeader(&student);
    std::cout << student.Introduce() << std::endl;

    getchar();getchar();
    return 0;

}