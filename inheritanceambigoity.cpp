#include<iostream>
using namespace std;

 class A
 {
     public:
    void show()
    {
        cout<<"showing the class A"<<endl;
    }
 };
    class B
    {
       public:
       void show()
    {
        cout<<"showing the class B"<<endl;
    }
    };
       class C : public A,public B
       {
          public:
          void check()
          {
            cout<<"the inheritance ambiguity is achived"<<endl;
          }
       };
     int main()
{
      C c1;
      c1.A::show();
      c1.B :: show();
      c1.check();
      return 0;
}