#include<iostream>
#define n 50
using namespace std;
    class stack
    {
       public:
         int top;
         char arr[n];   
                 stack()
            {
                 top=0;
            }
                 public:
                void push(char elm)
            {
                 if(top==n-1)
                 {
                 cout<<"the stack is full"<<endl;
                      exit(0);
                 }
                  else{
                   
                   arr[top]=elm; 
                   top++;

                  }
            }
                 public:
                 char pop()
                {
                    if(top==-1)
                    {
                       cout<<"the stack is empty"<<endl;
                          exit(0);
                    }
                      else
                      {
                         
                            char elm=arr[top];
                             top--;
                            return elm;
                      } 
                }
    };

               int main()
         {
               char arr[n]; stack s;
               char elm;   
               char temp[n]; int count=0;
                 int ch;     
                    
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
                         for(int i=0;i<=count;i++)
                         {
                            temp[i]=s.pop();
                         }
                            for(int i=0;i<=count;i++)
                            cout<<temp[i]<<" ";
                             break;
                         case 3:
                          exit(0);
                     }
                  }
            
                         return 0;
        }
              
              
              
              
            