#include<iostream>
#include<string>
using namespace std;
void reversestring(char str[],int n)
{
         if(n!=0)
         {
        for(int i=0;i<n/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
         
    }
         }
         else
         cout<<"string reverse  is not possible"<<endl;;
}
   void print(char str[],int n)
   {
        for(int i=0;i<n;i++)
        {
            cout<<str[i];
        }
   }
    
       
     int main() 
{
     int n; int flag=0;
     cout<<"enter the string length"<<endl;
     cin>>n;
     char str[n];
     cout<<"enter a string"<<endl;
     for(int i=0;i<n;i++)
     cin>>str[i]; 
       char temp[n];
       for(int i=0;i<n;i++)
         temp[i]=str[i];
     reversestring(str,n);
    //  print(str,n); 
          for(int i=0;i<n;i++)
          {
         if(temp[i]==str[i])
           flag++;
          else
            flag=0;            
          }
        if(flag>0)
         cout<<"the string is palindrome"<<endl;
         else
          cout<<"the string is not palindrome"<<endl;
     
     
     return 0;
}