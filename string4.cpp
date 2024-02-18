#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//sort the numeric string "2 3 1 5 8"->"1 2 3 5 8"
   string s="44156923";
   //sort(s.begin(),s.end(),greater<int>());// it print in decreasing order
   sort(s.begin(),s.end(),less<int>());// it print in increasing order
   cout<<s;
return 0;
}