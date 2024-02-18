#include<iostream>
#include"jagjit.h"
using namespace std;
   int main()
   {
      char ch;
      cout<<"enter a character"<<endl;
      cin>>ch;
          switch(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')
          {
               case 1:
               cout<<"it is an alphabet"<<endl;
               break;
               case 0:
                  switch(ch>='0' && ch<='9')
                  {
                    case 1:
                    cout<<"the character is numeric"<<endl;
                    break;
               default:
               cout<<"the character is special character"<<endl;
               break; 
          }
      }
        return 0;
   }