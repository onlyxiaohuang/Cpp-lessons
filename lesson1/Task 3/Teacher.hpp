#include<string>
#include"Person.cpp"

class Teacher:public Person{
public:
    Teacher(std::string name,uint16_t age,uint16_t klass) : Person(name,age) , klass(klass){}
    ~Teacher() = default;
    std::string Introduce() const noexcept ;


private:
    uint16_t klass;

};