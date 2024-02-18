#include<iostream>
#define n 20
using namespace std;
 
 class twostackusingarray
 {
       public:
      int arr[n];
      int top1;
      int top2;
         twostackusingarray()
         {
            top2=n/2;
            top1=(n/2)+1;
         }
          public:
            int push1(int elm)
            {
                if(top1==0)
                 {
                    cout<<"stack1 is full"<<endl;
                    exit(0);
                 }
                   else{
                       top1--;
                     arr[top1]=elm;
                      
                   }
           
            }
                 int push2(int elm)
            {
                if(top2==n-1)
                 {
                    cout<<"stack2 is full"<<endl;
                    exit(0);
                 }
                   else{
                       top2++;
                       arr[top2]=elm;
                   }
           
            }
                    int pop1()
                    {
                           if(top1==(n/2))
                           {
                            cout<<"stack1 is empty"<<endl;
                            exit(0);
                           }
                         else{
                            int elm=arr[top1];
                             top1++;
                             return elm;
                         }
                   }
                      int pop2()
                    {
                           if(top2==(n/2)+1)
                           {
                            cout<<"stack2 is empty"<<endl;
                            exit(0);
                           }
                         else{
                            int elm1=arr[top2];
                             top2--;
                             return elm1;
                         }
                   }
                      

};

           int main()
           {
                 int arr[n];
                   
                twostackusingarray s;
               s.push1(12);
                s.push1(23);
                cout<<s.pop1()<<endl;
                s.push2(34);
                s.push2(56);
                cout<<s.pop2()<<endl;
                
           }
                  


          
          
          
          