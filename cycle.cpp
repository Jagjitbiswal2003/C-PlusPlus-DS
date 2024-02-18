#include<iostream>
using namespace std;
class node
{
public:
   int data;
   node *next;
   node(int data)
   {
      this->data = data;
      next = NULL;
   }
};
  void print(node *&head)
{
   node *temp = head;
   //   cout<<"the nodes presesnt in the LL:"<<endl;
   while (temp != NULL)
   {
      cout << temp->data << "  ";
      temp = temp->next;
   }
   cout << endl;
}
   void insertAthead(node *&head, int data)
{

   node *temp = new node(data);
   temp->next = head;
   head = temp;
}
void insertAttail(node *&head, int data)
{
   node *node2 = new node(data);
   node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = node2;
}
void insertAtanypostion(node *&head, int postion, int data)
{
   node *node1 = new node(data);
   node *temp = head;
   int count = 1;
   while (count <= postion - 1)
   {
      temp = temp->next;
      count++;
   }
   node1->next = temp->next;
   temp->next = node1;
}
    void makecycle(node* &head,int pos)
    {
        node*temp=head;
        node*start;
          int count=1;
           while(temp->next!=NULL){
            if(count==pos)
              start=temp;
              temp=temp->next;
              count++;
           }
              temp->next=start;
    }

  node*detectcycle(node* &head)
  {
       if(head==NULL)
          return NULL;
          node*slow=head;
          node*fast=head;
           while(slow!=NULL && fast!=NULL)
           {
                 fast=fast->next;
                   if(fast!=NULL)
                     fast=fast->next;
                    slow=slow->next;
                    if(slow==fast){
                     cout<<"present at"<<slow->data<<endl;
                     return slow;
                    }
           }
               return NULL;
  }
   //detect the first element of the loop
      node*startnode(node* &head)
        {
         if(head==NULL)
            return NULL;
            node*intersection=detectcycle(head);
            node*slow=head;
            while(slow != intersection)
            {
               slow=slow->next;
               intersection=intersection->next;
            }
               return slow;
        }

        void removeloop(node* &head)
        {
          if(head==NULL)
           return;
            node*start=startnode(head);
            node*temp=start;
               while(temp->next!=start)
               {
                    temp=temp->next;
               }
                  temp->next=NULL;
        }
     

     int main()
{
  node *node1 = new node(15);

   node *head = node1;
   node*tail=node1;
   insertAthead(head, 44);
   insertAttail(head, 23);
   insertAttail(head, 67);
   insertAtanypostion(head, 2, 56);
     makecycle(head,3);
     removeloop(head);
    if(detectcycle(head)==NULL)
       cout<<"cycle is not detected"<<endl;
       else
       cout<<"the cycle is detected"<<endl;
     //  node*loop=startnode(head);
     //  cout<<"loop start at "<<loop->data<<endl;
  return 0;

}
   

    
   