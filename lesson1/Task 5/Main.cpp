#include<iostream>
#include"Student.cpp"
#include"Worker.cpp"
#include"Teacher.cpp"

int main(int argc,char *argv[]){
    uint16_t age,klass;
    std::string name;
    std::cin >> age >> name >> klass;

    Teacher teacher1(name,age);
    std::cout << teacher1.Introduce() << std::endl;

    Teacher teacher2(name,age,&klass);
    std::cout << teacher2.Introduce() << std::endl;

    std::cin >> age >> name >> klass;
    Student student(name,age,&klass);


    std::cout << teacher2.IntroduceWith(student) << std::endl;


    getchar();getchar();
    return 0;

}