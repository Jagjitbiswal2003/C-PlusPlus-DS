#include<iostream>
#define max 20
using namespace std;
 class stack
 {
        public:
      int rear;  int a[max]; int count=0;
      int front;
       stack()
       {
         rear=0;
         front=0;
       }
          public:
           int isempty()
           {
              if(rear==0)
              return 1;
              else
              return 0; 
           }
             int isfull()
           {
              if(rear==max-1)
              return 1;
              else
              return 0; 
           }
                  void push(int elm)
                  {
                     if(isfull())
                 {
                 cout<<"the stack is full"<<endl;
                      exit(0);
                 }
                  else{
                
                   a[rear]=elm; 
                   rear++;
                   count++;
                  }
             }
               int pop()
               {
                   if(isempty())
                 {
                 cout<<"the stack is empty"<<endl;
                      exit(0);
                 }   
                      else
                      {
                          int elm;
                           for(int i=rear;i>=count/2;i--)
                           {
                                int temp=a[i];
                                a[i]=a[count-i-1];
                                a[count-i-1]=temp;
                           }
                              elm=a[front];
                              return elm;
                      }
               }
 };




               int main()
            {
                 int a[max];
                 stack s;
                 s.push(4);
                 s.push(6);
                 s.push(8);
                 s.push(8);
                  cout<<s.pop();


                 return 0;
            }