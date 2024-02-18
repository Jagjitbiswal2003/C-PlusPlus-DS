#include<iostream>
#define max 50

using namespace std;
  class cqueue
  {
     public:
      int rear;   int temp=0;
      int front; 
      int arr[max];
       cqueue()
       {
            rear=-1;
            front=0; 
       }
         int isempty()
         {
           if(rear==-1&&front==0)
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
           void enqueue(int elm)
           {
              if(isfull())
              {
                cout<<"the cqueue is full"<<endl;
                exit(0);
              }
               else{
                  rear=(rear+1)%max;
                  arr[rear]=elm;
               }
           }
                int dequeue()
                {
                    if(isempty())
                        {
                            cout<<"the queue is empty"<<endl;
                              exit(0);
                        }
                           else{
                                int elm;
                                elm=arr[front];
                                front=(front+1)%max;
                                return elm;
                           }
                    }
                       int count()
                       {
                          for(int i=front;i<=rear;i++)
                             {
                                   temp++;
                             }
                                return temp;
                       }
                        void display()
                       {
                            if(isempty())
                             cout<<"queue is empty"<<endl;
                             else{
                                  for(int i=front;i<=rear;i++)
                                    cout<<arr[i]<<" ";
                             }
                       }
  };
                 int main()
            {
                int arr[max];
                int elm;
                int ch=0;  cqueue q;
           
               
                    while(ch!=6)
                    {
                    cout<<"enter your queue operation:1.enque 2.deque 3.count 4.display 5.exit"<<endl;
                    cin>>ch;
                       
                        switch(ch)
                        {
                             case 1:
                             cout<<"enter the element for enqueue"<<endl;
                             cin>>elm;
                              q.enqueue(elm);
                              break;
                              case 2:
                              cout<<"the dequeued element is:"<<q.dequeue()<<endl;
                              
                              break;
                              case 3:
                              cout<<"the no of elements in the queue is:"<< q.count()<<endl;
                                q.count();
                               break;
                               case 4:
                               q.display();
                                 break;
                               case 5:
                                 exit(0);
                       }
                    }
                         return 0;
        }
                
                
                
                
                
               
                  
              