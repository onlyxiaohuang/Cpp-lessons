#include<iostream>
#include"Person.cpp"
#include"Teacher.cpp"


int main(int argc,char *argv[]){
    std::string name("Tom");
    Person person(name,21,200);
    Teacher teacher(name,21,200,2);

    const std::string result = person.Introduce();
    std::cout<<result<<std::endl;

    const std::string ans = teacher.Introduce();
    std::cout<<ans<<std::endl;

    getchar();getchar();
    return 0;
}