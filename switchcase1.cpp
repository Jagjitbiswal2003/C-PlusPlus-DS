#include<iostream>
#include"jagjit.h"
using namespace std;
   int main()
   {
      int number;
      cout<<"enter the number"<<endl;
      cin>>number;
      switch(number%2)
      {
        case 0:
        cout<<"number is even"<<endl;
        break;
        default:
        cout<<"the number is odd"<<endl;
      }
   }

