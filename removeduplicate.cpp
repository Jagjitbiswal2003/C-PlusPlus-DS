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
  node* removeduplicate(node* &head)
  {
         if(head==NULL)
           return NULL;
           node*curr=head;
            while(curr!=NULL)
            {
                if(curr->next!=NULL && curr->data==curr->next->data)
                {
                  
                }
            }
  }


int main()
{
return 0;
}