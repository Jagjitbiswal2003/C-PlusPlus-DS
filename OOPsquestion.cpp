#include<iostream>
using namespace std;
class student
{
   private:
   string name;
   public:
   int age;
   long roll;
      string getname()  //get use used to extract the data member if it is private or protected.
      {
        cout<<name;
      }

       void setvalues(string na,int ag,long ro)
      {
           name=na;
           age=ag;
           roll=ro;
      }
           void print()
           {
              
              cout<<"the  name of the student is:"<<name<<endl;
              cout<<"the  age of the student is:"<<age<<endl;
              cout<<"the rollnumber of the student is:"<<roll<<endl;
           }

};

      int main()
    {
         student*st=new student;
         //student st;
         string name; int age; long roll;
         cout<<"enter the name,age,roll for student"<<endl;
         cin>>name>>age>>roll;
         (*st).setvalues(name,age,roll);
         (*st).print();  
         return 0;
    }