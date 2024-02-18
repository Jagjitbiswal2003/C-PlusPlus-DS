#include<iostream>
#include<cstring>
using namespace std;
  class student
  {
     private:
      string name;
      int age;
      string gender;

            string getname()
            {
                 return name;
            } 
             int getage()
             {
                return age;
             }
             string getgender()
             {
                 return gender;
             }
                public:
                   student(string name,int age,string gender)
                {
                    this->name=name;
                    this->age=age;
                    this->gender=gender;
                }
                public:
                 void show()
                 {
                    cout<<"the name of the student is:"<<name<<endl;
                    cout<<"the age of the student is:"<<age<<endl;
                    cout<<"the gender of the student is:"<<gender<<endl;
                 }
                    
                     ~student()
                     {
                        cout<<"destructor is called"<<endl;
                     }
             
  };

int main()
{
     string name; int age; string gender;
     cout<<"enter the name,age,gender of the student"<<endl;
     cin>>name>>age>>gender;
   student s(name,age,gender); // in static object the destructor called automaticaly. 
// student *s=new student(name,age,gender);  //in dynamic you have to call the destructor function.
//  (*s).show();  delete s;  // destructor is called in dynamic object.
      return 0;
}