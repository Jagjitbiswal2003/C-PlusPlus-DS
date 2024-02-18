#include<iostream>
using namespace std;
     int fabonacci(int n)
     {
       int a=0;
       int b=1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
             cout<<i<<" ";
            if(i==1)
            cout<<i<<" ";
             int c=a+b;
            cout<<c<<" "; 
              a=b;
              b=c;
        }
  }



  int main()
  {
        int ra;
        cout<<"enter an range"<<endl;
         cin>>ra;
          fabonacci(ra);
         return 0;
  }
