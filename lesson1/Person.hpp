#pragma once //防止头文件冲突

#include<string>

class Person{
    private:
    std::string name;
    uint16_t age;//精准类型定义
    uint64_t id;

    public:
    virtual ~Person() = default; //析构函数，清理善后工作 default表示默认值
    Person(const std::string /*通过引用防止再复制一遍*/&name,const uint16_t age,const int id);
    virtual std::string Introduce() const noexcept;//const 表示只读,noexcept表示其修饰的函数不会抛出异常
    virtual std::string GetName() const noexcept; //对外暴露数据
    virtual std::uint16_t GetAge() const noexcept; 
    virtual std::uint64_t GetId() const noexcept;

};

uint16_t Person::GetAge() const noexcept
{  return age; }
std::string Person::GetName() const noexcept
{  return name; }
uint64_t Person::GetId() const noexcept
{  return id; }
