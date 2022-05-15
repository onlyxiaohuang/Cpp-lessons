#include"Person.hpp"

class Teacher:public Person{
    private:
    uint16_t klass;
    public:
    Teacher(const std::string &name,const uint16_t age,const int id,const uint16_t klass);
    std::string Introduce() const noexcept override;//override表示重写
    virtual std::string GetName() const noexcept ;
    virtual std::uint16_t GetAge() const noexcept; 
 //   virtual std::uint64_t GetId() const noexcept;

};