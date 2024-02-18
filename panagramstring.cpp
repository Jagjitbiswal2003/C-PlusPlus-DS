#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     int n;
     cout<<"enter the string length"<<endl;
     cin>>n;
     string str;
     cout<<"enter the string"<<endl;
     cin>>str;
     int arr[26]={0};
      for(int i=0;i<n;i++)
      {
           if(str[i]<97)
           {
              str[i]=str[i]+32;
              arr[str[i]-'a']+=1;
           }
             else
             arr[str[i]-'a']+=1;
      }
             for(int i=0;i<26;i++)
             {
                  if(arr[i]==0){
                  cout<<"the string is not panagram"<<endl;
                  break;
                  }
             }
               cout<<"the string is panagram;"<<endl;
               return 0;
} 