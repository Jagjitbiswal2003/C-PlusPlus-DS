#include<iostream>

using namespace std;
   int armstrong(int n)
   {
      cout<<"it is valid only for three digits"<<endl;
         int sum=0;
         int temp=n; 
         int count=0;
         int rem=0;
        if(n>0)
        {
               while(n!=0)
            {
                rem=n%10;
                sum=sum+rem*rem*rem;
                count++;
                n=n/10;

            }
                      if(count==3){
                  if(temp==sum)
                  cout<<"the number is armstrong"<<endl;
                  
                  else
                  cout<<"the number is not armstrong"<<endl;
                      }
        }
                else
                {
                    cout<<"checking is not possible"<<endl;
                }
                   if(count>3)
                   cout<<"checking is possible for only three numbers"<<endl;
   
   }


                   int main()
                   {
                       int number;
                       cout<<"enter a number"<<endl;
                       cin>>number;
                        armstrong(number);
                        return 0;
                   }





