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
            cout<<"the nodes presesnt in the LL:"<<endl;
            while(temp!=NULL)
             {
                 cout<<temp->data<<"  ";
                  temp=temp->next;
             }
               
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

                int deletehead(node* &head)
                {
                     node*temp=head;
                     head=head->next;
                     if(head==NULL && head->next==NULL) 
                         cout<<"error in deleting";
                       else{
                          
                          temp->next=NULL;
                           delete(temp);
                       }              
              }
                 int deleteAttail(node* &head)
                 {
                      node*temp=head;
                      node*prev=head;
                        while(prev->next->next!=NULL)
                        {
                             prev=prev->next;
                        }
                          prev->next=NULL;
                            delete(prev);
                 }
                void deleteAtanyposition(node* &head,int pos)
                 {
                     node*temp=head;
                     node*prev=NULL; 
                        int ctr=1;
                        while(ctr<pos)
                        {
                          prev=temp;
                          temp=temp->next;
                          ctr++;
                        }
                          prev->next=temp->next;
                          temp->next=NULL;
                          delete temp;
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
         deletehead(head);  
         deleteAttail(head);
         deleteAtanyposition(head,2);
         print(head);
return 0; 
}
