#include<iostream>
using namespace std;

    int palindrome(int num)
    {
        int temp=0,rem=0,rev=0;
           while(num!=0)
           {
             rem=num%10;
             rev=rev*10+rem;
             num=num/10;
           }
              if(temp==num)
              cout<<"the number is palindrome"<<endl;
              else
              cout<<"the number is not palindrome"<<endl;
    }
           int main()
           {
              int number;
              cout<<"enter the number"<<endl;
              cin>>number;
               palindrome(number);
               return 0;
           }

        