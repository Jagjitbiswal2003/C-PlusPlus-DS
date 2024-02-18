#include<iostream>
using namespace std;
    
    int perfect(int n)
     {
         int sum=0;
         int count=0;  int temp=n;
             if(n>0)
           {
           for(int i=0;i<n;i++)
           {
                if(n%i==0)
                {
                  sum=sum+i;
                 }
             }
               }
                  if(sum==temp)
                 cout<<"the number is a perfect number" <<n<<endl;
                  else
                  cout<<"the number is not a perfect number" <<n<<endl;
             
     }
                   int main()
                   {
                       int n;
                       cout<<"enter the number"<<endl;
                        cin>>n;
                        perfect(n);
                        return 0;
                   }

       