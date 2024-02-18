#include<iostream>
using namespace std;
  class poly
  {
      public:
       int age;
       string name;
        
           void show(int age) //method overloading.
           {
               cout<<"the age is:"<<age<<endl;
               cout<<"method overloading is achived"<<endl;
           }
             void show(string name)
           {
               cout<<"the name is:"<<name<<endl;
               cout<<"method overloading is achived"<<endl;
           }
  };
              int main()
       {
                int age; string name;
                 cout<<"enter age and name"<<endl;
                 cin>>age>>name;
                  poly p;
                 p.show(age);
                 p.show(name);
                return 0;
      }