#include<iostream>
 #include<cstring>
 using namespace std;
 #define n 10
  class stack
  {
       public:
      int top;
      char arr[n];
        stack()
      {
           top=-1;
      }
        void push(char elm)
        {
           if(top==n-1)
           {
            cout<<"stack is full"<<endl;
            exit(0);
           }
            else{
               top++;
               arr[top]=elm;
            }
        }
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
                        cout<<"the stack is work properly"<<endl;
                      }
                
                }
       };
               int main()
         {
              char arr[n]; int count=0;
              stack s;  int i=0;
                 string exp;
              
               cout<<"enter your paranthesis"<<endl;
                  
                  cin>>exp;
                  
                   while(exp[i]!='\0')
                  {
                     switch(exp[i])
                     {
                         case '{':
                         case '[':
                         case '(':
                         s.push(exp[i]);
                         count++;
                         break;
                        case '}':
                        if(s.arr[s.top]=='{')
                        {
                         s.pop();
                        count--;
                        break;
                        }
                      else
                      {
                        exit(0);
                      }
                       case ']':
                        if(s.arr[s.top]=='[')
                        {
                         s.pop();
                        count--;
                         break;
                        }
                      else
                      {
                        exit(0);
                      }
                      case ')':
                        if(s.arr[s.top]=='(')
                        {
                          s.pop();
                        count--;
                         break;
                        }
                      else
                      {
                       exit(0);
                      }
                  }
                      
                      i++;  
          }
                     if(count==0)
                     cout<<"valid parenthesis"<<endl;
                     else
                      cout<<"invalid paranthesis"<<endl;
                     return 0;
            }