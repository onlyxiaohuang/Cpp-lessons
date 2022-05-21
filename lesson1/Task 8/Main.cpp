#include<iostream>
#include"Student.cpp"
#include"Worker.cpp"
#include"Teacher.cpp"
#include"Class.cpp"
#include"Computer.cpp"

int main(int argc,char *argv[]){
    uint16_t age,klass,leader,id;
    std::string name;

    Computer compu; 
    Class kl1(1),kl2(2),kl3(3);
    compu.Notify(&kl3);

 //   std::cout << &kl3 << std::endl;

    Student tom("TOM",12,123,&kl1);
    Student jerry("Jerry",13,111,&kl1);
    Student tomas("Tomas",10,112,&kl2);
    Student uz("Uz",14,102,&kl2);
    Student nis("Nis",15,118,&kl3);

    Teacher jason("Jason",30,233);
    std::cout << jason.Introduce() << std::endl;

    jason.AddClass(&kl1);
    std::cout << jason.Introduce() << std::endl;

 //   if(jason.Isteaching(&tomas))  std::cout << "Yes" << std::endl;
  //  else std::cout << "No" << std::endl;

    kl1.AssignLeader(&tom,"tom",&compu);

    kl1.AppendMember(&tom,"tom",&compu); kl1.AppendMember(&jerry,"jerry",&compu);
    kl2.AppendMember(&tomas,"tomas",&compu); kl2.AppendMember(&uz,"uz",&compu);
    kl3.AppendMember(&nis,"nis",&compu);


    jason.AddClass(&kl2);
    std::cout << jason.Introduce() << std::endl;

  //  if(jason.Isteaching(&tomas))  std::cout << "Yes" << std::endl;
  //  else std::cout << "No" << std::endl;


    getchar();getchar();
    return 0;

}