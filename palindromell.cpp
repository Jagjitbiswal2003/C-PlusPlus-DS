#include <iostream>
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
node *reverse(node *&head)
{
   if (head == NULL || head->next == NULL)
      return head;

   node *prev = NULL;
   node *curr = head;
   node *forward = NULL;
   while (curr != NULL)
   {
      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
      head = prev;
   }
   return head;
}
node *midnode(node *&head)
{
  node*slow=head;
  node*fast=head->next;
     while(fast!=NULL && fast->next!=NULL)
     {
          fast=fast->next->next;
          slow=slow->next;
     }
           return slow;
}
bool ispalindrome(node* &head)
{
   if (head == NULL || head->next == NULL)
      return false;
   node *mid = midnode(head);
   node *temp = mid->next;
   mid->next = reverse(temp);
   node *head1 = head;
   node *head2 = mid->next;
   while (head2 != NULL)
   {
      if (head1->data != head2->data) {
          return false;
      }
      head1 = head1->next;
      head2 = head2->next;
   }
   temp = mid->next;
   mid->next = reverse(temp);
   return true;
}
int main()
{
   node *node1 = new node(15);

   node *head = node1;
   // node *prev = node1;
   insertAthead(head, 44);
   insertAttail(head, 23);
   insertAttail(head, 67);
   insertAtanypostion(head, 2, 56);
    print(head);
     if(ispalindrome(head))
        cout<<"palindrome"<<endl;
      else
      cout<<"not palindrome"<<endl;
    
   return 0;
}