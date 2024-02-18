#include<iostream>
#define n 30
using namespace std;
  class  queue
  {
        public:
          int arr[n];
          int rear;
          int front;
              queue(){
                 rear=0;
                 front=0;
              }
                 int isempty()
                 {
                    if(rear==0)
                     return 1;
                     else
                     return 0;
                  }
                    int isfull()
                 {
                    if(rear==n-1)
                     return 1;
                     else
                     return 0;
                  }
                      public:
                    void enqueue(int elm)
                    {
                        if(isfull())
                        {
                            cout<<"the queue is full"<<endl;
                              exit(0);
                        }
                           else{
                              arr[rear]=elm;
                               rear++;
                           }
                    }
                       public:
                      int deque()
                    {
                        if(isempty())
                        {
                            cout<<"the queue is empty"<<endl;
                              exit(0);
                        }
                           else{
                                int elm;
                                elm=arr[front];
                                front++;
                                return elm;
                           }
                    }
                          void display()
                     {
                          if(rear==0)
                           {
                            cout<<"queue is empty"<<endl;
                           }
                         for(int i=front;i<rear;i++)
                         {
                             cout<<"the element in the queue is"<<arr[i]<<" "<<endl;
                         }
                           
                     }
   
  };
                int main()
              {
                   
               
                int arr[n];
                int elm;
                int ch=0;   queue q;
           
               
                    while(ch!=4)
                    {
                    cout<<"enter your queue operation:1.enque 2.deque 3.display 4.exit"<<endl;
                    cin>>ch;
                       
                        switch(ch)
                        {
                             case 1:
                             cout<<"enter the element for enqueue"<<endl;
                             cin>>elm;
                              q.enqueue(elm);
                              break;
                              case 2:
                              cout<<"the dequeued element is:"<<q.deque()<<endl;
                              
                              break;
                              case 3:
                              cout<<"the element in the queue is:"<<endl;
                              q.display();
                               break;
                               case 4:
                               exit(0);
                        
                       }
                    }
                         return 0;
        }
                
                
                
                
                
               