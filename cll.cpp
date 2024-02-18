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
        this->next = next;
    }
    ~node()
    {
        int v = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void insertion(node *&tail, int ele, int data)
{
    if (tail == NULL)
    {
        node *node1 = new node(data);
        tail = node1;
        node1->next = node1;
    }
    else
    {

        node *curr = tail;
        while (curr->data != ele)
        {
            curr = curr->next;
        }
        node *temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *&tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteelement(node *&tail, int val)
{
    if (tail == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }
    node *prev = tail;
    node *curr = prev->next;
    while (curr->data == val)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    // node* node2=new node(15);
    node *tail = NULL;
    insertion(tail, 15, 45);
    insertion(tail, 45, 10);
    insertion(tail, 10, 20);
    print(tail);
    deleteelement(tail, 20);
    print(tail);

    return 0;
}