#include<iostream>
using namespace std;
#define n 20
      class stack
    {
         public:
         int top;
         int arr[n];
                 stack()
            {
                
                top=0;
            }
                 public:
                void push(int elm)
            {
                 if(top==n-1)
                 {
                 cout<<"the stack is full"<<endl;
                      exit(0);
                 }
                  else{
                   
                   arr[top]=elm; top++;
                  }
            }
                 public:
                 int pop()
                {
                    if(top==0)
                    {
                       cout<<"the stack is empty"<<endl;
                          exit(0);
                    }
                      else
                      {
                         
                            int elm=arr[top];
                             top--;
                            return elm;
                      } 
                }
                      
      };

               int main()
             {
                int arr[n];
                int elm;
                int ch=0;   stack s;  int count=0;  int mid;
                        
                            
                          
                          
                            while(ch!=5)
                          {
                           cout<<"enter the choice:1.push 2.pop 3.middle 4.exit"<<endl;
                                 cin>>ch;
                                 switch(ch)
                                 {
                                   case 1:
                                    cout<<"enter an element to push"<<endl;
                                    cin>>elm;
                                    s.push(elm);
                                     count++;
                                    break;
                                    case 2:
                                    cout<<"popped element is:"<<s.pop()<<endl;
                                     break;
                                     case 3:
                                         if(count==0)
                            cout<<"the middle elment find is not possible"<<endl;
                                        if(count%2==0)
                                          {
                                              mid=((count-1)/2)+1;
                                              cout<< s.arr[mid];
                                          }
                                          else
                                          {
                                              mid=count/2;
                                              cout<< s.arr[mid];
                                          }
                                         break;
                                      case 4:
                                         exit(0);
                                         break;
                                 }


                          }
                                
                        
                         return 0;
             }               
                             