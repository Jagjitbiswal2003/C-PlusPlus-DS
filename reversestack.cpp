#include<iostream>

#define n 50
using namespace std;
      class stack
    {
         public:
         int top;
         int arr[n];
         
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
             
                int push(int elm)
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
                
    };
           int main()
        {
           stack s;
           int arr[n]; 
           int temp[n];
           int elm;
           int ch;   int count=0;
                 
                 
                  while(ch!=3)
                  {
                      cout<<"enter the choice:1.push 2.reverse 3.exit"<<endl;
                       cin>>ch;
                     switch(ch)
                     {
                        case 1:
                        cout<<"enter the element"<<endl;
                        cin>>elm;
                        s.push(elm);
                        count++;
                        break;
                        case 2:
                         for(int i=0;i<count;i++)
                         {
                            temp[i]=s.pop();
                         }
                            for(int i=0;i<count;i++)
                            cout<<temp[i]<<" ";
                             break;
                         case 3:
                          exit(0);
                     }
                  }
            
                         return 0;
        }