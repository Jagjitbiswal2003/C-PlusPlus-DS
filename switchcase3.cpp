#include<iostream>
#include"jagjit.h"
using namespace std;
   int main()
   {
      int n1,n2;
      cout<<"enter two numbers"<<endl;
      cin>>n1>>n2;
        switch(n1>n2)
        {
            case true:
            cout<<"the greater number is" <<n1<<endl;
            break;
            default:
            cout<<"the greater numer is" <<n2<<endl;
            break;
        }
              return 0;   
   }