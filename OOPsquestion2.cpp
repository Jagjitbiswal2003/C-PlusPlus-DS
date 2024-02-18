#include<iostream>
using namespace std;
 class prime
 {
    public://how to create a function in class
     void check(int n)
     {
          int temp=0;
          for(int i=2;i<n;i++)
          {
              if(n%i==0)
               temp++; 
          }
             if(temp==1)
             cout<<"the number is not prime"<<endl;
             else
             cout<<"the number is prime"<<endl;
     }
 };
       int main()
{
     int n;
     cout<<"enter an number"<<endl;
     cin>>n;
     prime p;
     p.check(n);// how to call a function in class
return 0;
}