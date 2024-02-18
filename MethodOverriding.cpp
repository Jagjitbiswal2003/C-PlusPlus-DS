#include<iostream>
using namespace std;
   // method overinding achive in only inheritance.
      class human
      {
         public:
         string name;
         int age;
         void show(string name,int age)
         {
             cout<<"the name is:"<<name<<endl;
             cout<<"the age is:"<<age<<endl;
             cout<<"the human class is called"<<endl;
         }
     };
           class ram : public human
           {
                public:
                 
                 void show(string name,int age)
                 {
                     cout<<"the name is:"<<name<<endl;
                     cout<<"the age is:"<<age<<endl; 
                     cout<<"the ram class is called"<<endl;
                 }
           };
  
  
  
             int main()
  {
              string name="jagjit"; int age=20;
              ram r;
             // r.show(name,age);
              r.human::show(name,age);
               return 0;
  }