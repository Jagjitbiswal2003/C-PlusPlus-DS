#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string str;   
   string str1;
   cout<<"enter two strings"<<endl;
   cin>>str>>str1;
   int n=str.length();
   int m=str1.length();
   int count=n;
      sort(str.begin(),str.end());
      sort(str1.begin(),str1.end());
        cout<<str<<endl;
        cout<<str1<<endl;;
        
        if(n==m)
        {
             for(int i=0;i<n;i++)
               {
                if(str[i]==str1[i])
                   count--;
               }
        }
                    if(count==0)
                    cout<<"the strings are anagram"<<endl;
                    else
                    cout<<"the string are not anagram"<<endl;
       return 0;
}
//best logic i have ever think......
