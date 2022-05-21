#include<iostream>
#include"Student.cpp"
#include"Worker.cpp"
#include"Teacher.cpp"

int main(int argc,char *argv[]){
    uint16_t age,klass;
    std::string name;
    std::cin >> age >> name >> klass;

    Student student(name,age,klass);

    std::cout << student.Introduce() <<std::endl;

    Worker worker(name,age);

    std::cout << worker.Introduce() <<std::endl;

    Teacher teacher(name,age,klass);

    std::cout << teacher.Introduce() <<std::endl;

    getchar();getchar();
    return 0;

}