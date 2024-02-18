#include<iostream>
using namespace std;
  class Employee
  {
     public:
     string name;
     int age;
     float salary;
       void check()
     {
        cout<<"your class is perfectly call by the object"<<endl;
     }
         //use set and get method....
           void setvalue(string na,int ag,float sal)
           {
             name=na;
             age=ag;
             salary=sal;
           }
             void print()
             {
                cout<<"the name is "<<name<<endl;
                cout<<"the age is "<<age<<endl;
                cout<<"the salary is"<<salary<<endl;
             }
   };

         int main()
    {
         // Employee obj; // static object...
          Employee *obj=new Employee;// dynamic object....
          string name;int age; float salary;
          cout<<"enter the name,age,salary"<<endl;   
          cin>>name>>age>>salary;
         (* obj).setvalue(name,age,salary);
          (*obj).print();
          (*obj).check();
          return 0;
    }