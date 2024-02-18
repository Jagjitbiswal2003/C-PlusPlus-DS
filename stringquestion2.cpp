#include<iostream>
#include<string>
using namespace std;
int main()
{
   int n; int count=0;
   cout<<"enter the length of string"<<endl;
   cin>>n;
   char str[n];//find the duplicate element in string...
   cout<<"enter the string"<<endl;
   cin>>str;
     for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
           if(str[i]==str[j])
           {
            cout<<"duolicate element is:"<<str[i]<<endl;
             count++;
            break;

           }
              
        }
     }        
                if(count==0)
              cout<<"there is no duplicate element in a string"<<endl;

        return 0;
}