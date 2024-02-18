#include<iostream>
#include"jagjit.h"
using namespace std;
   int main()
   {
       int number;
       cout<<"enter the number of the day"<<endl;
       cin>>number;
          switch(number)
          {
            case 1:
            cout<<"Monday";
            break;
            case 2:
            cout<<"Tuesday";
            break;
            case 3:
            cout<<"Wednesday";
            break;
            case 4:
            cout<<"Thursday";
            break;
            case 5:
            cout<<"Friday";
            break;
            case 6:
            cout<<"Saturday";
            break;
            case 7:
            cout<<"Sunday";
            break;
            default:
            cout<<"error";
            break;
          }

       
       
   }
