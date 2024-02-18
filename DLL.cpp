#include <iostream>
using namespace std;
class node
{
public:
     int data;
     node *next;
     node *prev;
     node(int data)
     {
          this->data = data;
          this->next = NULL;
          this->prev = NULL;
     }
        ~node(){
          int v=this->data;
          if(next!=NULL){
            delete next;
            next=NULL;
          }
        }
};
void print(node *&head)
{
     node *temp = head;
     while (temp != NULL)
     {
          cout << temp->data << " ";
          temp = temp->next;
     }
     cout << endl;
}
int getlen(node *&head)
{
     int count = 0;
     node *temp = head;

     while (temp != NULL)
     {
          count++;
          temp = temp->next;
     }
     return count;
}
void insertAthead(node *&head, int data)
{
     node *temp = new node(data);
     temp->next = head;
     head->prev = temp;
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
     node2->prev = temp;
}
void insertAtanyposition(node *&head, int data, int pos)
{
     node *node3 = new node(data);
     node *temp = head;
     int cur = 1;
     while (cur <= pos - 1)
     {
          cur++;
          temp = temp->next;
     }
     node3->next = temp->next;
     temp->next->prev = node3;
     temp->next = node3;
     node3->prev = temp;
}
    void deleteAthead(node* &head)
    {
            node*temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete (temp);
    }
    void deleteAttail(node* &head)
    {
         node*temp=head;
         node*temp2;
          while(temp->next!=NULL)
             {
               temp=temp->next;
             }          
                 temp2=temp->prev;
              //temp->next->prev=NULL;
               temp2->next=NULL;
               delete(temp);
    }
        void deleteAtanyposition(node* &head,int postion)
        {
             int count=1;
              node*cur=head;
              node*prev=NULL;
                 while(count<postion)
                 {
                      prev=cur;
                      cur=cur->next;
                      count++;
                 }
                     cur->prev=NULL;
                     prev->next=cur->next;
                     cur->next=NULL;
                       delete(cur);
        }

int main()
{
     node *node1 = new node(17);
     node *head = node1;
     insertAthead(head, 20);
     insertAthead(head, 30);
     insertAttail(head, 100);
     insertAttail(head, 50);
     insertAttail(head, 69);
     insertAtanyposition(head, 71, 2);
       print(head);
      deleteAthead(head);
      deleteAttail(head);
        deleteAtanyposition(head,3);
     cout << getlen(head) << endl;
     print(head);

     return 0;
}
