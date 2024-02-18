#include<iostream>
#include"jagjit.h"
using namespace std;
   int main()
{
    char ch;
    cout<<"enter a charactr"<<endl;
    cin>>ch;
      switch(ch)
      {
        case 'a':
        cout<<"the character is vowel"<<endl;
        break;
       case 'e':
        cout<<"the character is vowel"<<endl;
        break;
       case 'i':
        cout<<"the character is vowel"<<endl;
        break;
       case 'o':
        cout<<"the character is vowel"<<endl;
        break;
       case 'u':
        cout<<"the character is vowel"<<endl;
        break;
        default:
        cout<<"the character is consonant"<<endl;
        break;
      }
         return 0;
}

