#include<iostream>
using namespace std;
      class A
   {
      public:
      int a; int b;
   };  
      class B : public A
      {
          public:int c;
          public:
             void check()
             {
                cout<<"the multilevel inheritance is achived"<<endl;
             } 
      };
   
      class Cal : public B
      {
          public:
           char ch;
            
             void calculator(int a,int b,int c)
           {
                cout<<"enter an choice"<<endl;
                cin>>ch;
              switch(ch)
              {
                 case '+':
                 cout<<"the sum is:"<<a+b+c<<endl;
                 break;
                 case '-':
                 cout<<"the difference is:"<<a-b-c<<endl;
                 break;
              } 
           }
      };
   
            int main()
   {
            int a; int b; int c;
            cout<<"enter three numbers for calculator:"<<endl;
            cin>>a>>b>>c;
             Cal c1;
             c1.calculator(a,b,c);
             c1.check();
            return 0;
   }