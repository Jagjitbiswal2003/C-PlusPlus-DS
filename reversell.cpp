#include<iostream>
using namespace std;
class node{
     public:
     int data;
     node*next;
       node(int data)
       {
          this->data=data;
          next = NULL;
       }

        ~node(){
          int v=this->data;
          if(this->next!=NULL){
            delete next;
            this->next=NULL;
          }
        }

};
        void print(node* &head)
          {
          node* temp=head;
         //   cout<<"the nodes presesnt in the LL:"<<endl;
            while(temp!=NULL)
             {
                 cout<<temp->data<<"  ";
                  temp=temp->next;
             }
                cout<<endl;
          } 
       
        void insertAthead(node* &head,int data)
        {
                 
               node*temp=new node(data);
               temp->next=head;
                head=temp;
                  
                  
        }
       void insertAttail(node* &head,int data)
       {
              node*node2=new node(data);
             node *temp = head;
                     while(temp->next!=NULL)
                   {
                          temp=temp->next;
                   }
                     temp->next=node2;
                
        }
         void insertAtanypostion(node* &head,int postion,int data)
         {
                     node*node1=new node(data);
                     node*temp=head;
                     int count=1;
                       while(count<=postion-1)  
                       {
                            temp=temp->next;
                            count++;
                       }
                          node1->next=temp->next;
                          temp->next=node1;
          }
            node* reverse(node* &head)
            {
                  if(head==NULL||head->next==NULL)
                     return head;
                     
                        node*prev=NULL;
                        node*curr=head;
                         node*forward=NULL;
                          while(curr!=NULL)
                          {
                              forward=curr->next;
                              curr->next=prev;
                              prev=curr;
                              curr=forward;
                              head=prev;
                          }
                          return head;
             }
               node* midnode(node* &head)
               {
                   int count=0;
                   node*temp=head;
                   node*curr=head;
                   while(temp!=NULL)
                    {
                      temp=temp->next;
                      count++;
                    }
                      int ans=count/2;
                       while(ans!=0)
                       {
                          curr=curr->next;
                          ans--;
                       }
                           temp=curr;
                           cout<<temp->data<<" ";
               }
              
              int main()
{
      node*node1=new node(15);
      
         node*head=node1;
         node*prev=node1;
         insertAthead(head,44);
         insertAttail(head,23);
         insertAttail(head,67);
         insertAtanypostion(head,2,56);
         print(head);
         midnode(head);
         reverse(head);
        print(head);
return 0; 
}