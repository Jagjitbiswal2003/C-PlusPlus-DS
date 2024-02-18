#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n; 
  cout<<"enter length of string"<<endl;
  cin>>n;
   char str[n];
  cout<<"enter the string"<<endl;
   cin>>str;
    for(int i=0;i<n;i++)
    {
          if(str[i]>='a' && str[i]<='z') { // lower case to upper case..
            str[i]=str[i]-32;
        
            }
    }
          // cout<<str;
       for(int i=0;i<n;i++)
    {
          if(str[i]>='A' && str[i]<='Z') { // upper case to lower case..
            str[i]=str[i]+32;
            
          }
    }
        cout<<str;

          
    
return 0;

}