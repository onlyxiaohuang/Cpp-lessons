#include<iostream>
#include"Person.cpp"


int main(int argc,char *argv[]){
    uint16_t age;
    std::string name;
    std::cin>>age>>name;

    Person person(name,age);

    std::cout<<person.Introduce()<<std::endl;

    getchar();getchar();
    return 0;

}