#include<iostream>
using namespace std;
#define n 50
    class stack
    {
         public:
         int top;
         int arr[n]={0};
            stack()
            {
                
                top=-1;
            }
        
          int isempty()
          {
             if(top==-1)
              return 1;
              else
              return 0;
          }
            
             int isfull()
          {
             if(top==n-1)
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
                   top++;
                   arr[top]=elm;
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
                        int elm=arr[top];  arr[top]=0;
                          top--;
                          return elm;
                        cout<<"the stack is work properly"<<endl;
                      }
                
                }
   
                     void display()
                     {
                          if(top==-1)
                           {
                            cout<<"stack is empty"<<endl;
                           }
                         for(int i=top;i>=0;i--)
                         {
                             cout<<"the element in the stack is"<<arr[i]<<" "<<endl;
                         }
                           
                     }
   
             };

              int main()
        {
               
                int arr[n];
                int elm;
                int ch=0;   stack s;
           
               
                    while(ch!=4)
                    {
                    cout<<"enter your stack operation:1.push 2.pop 3.display 4.exit"<<endl;
                    cin>>ch;
                       
                        switch(ch)
                        {
                             case 1:
                             cout<<"enter the element for push"<<endl;
                             cin>>elm;
                              s.push(elm);
                              break;
                              case 2:
                              cout<<"the popped element is"<<s.pop()<<endl;
                              break;
                              case 3:
                              cout<<"the element in the stack is:"<<endl;
                              s.display();
                               break;
                               case 4:
                               exit(0);
                        
                       }
                    }
                         return 0;
        }

