#include <iostream>
#include <queue>

using namespace std;
class node
{
public:
   int data;
   node *left;
   node *right;
   node(int data)
   {
      this->data = data;
      this->left = NULL;
      this->right = NULL;
   }
};
node *insert(node *&root)
{
   cout << "enter the data for tree:" << endl;
   int data;
   cin >> data;
   root = new node(data);
   if (data == -1)
      return NULL;
   cout << "insert data at the left of" << data << endl;
   root->left = insert(root->left);
   cout << "insert data at the right of" << data << endl;
   root->right = insert(root->right);
   return root;
}
    int max1(int a,int b,int c)
         {
             if(a>b && a>c)
               return a;
             else if(b>a && b>c)
               return b;
             else 
                return c;
         }
int diameter(node *&root)
{
   if (root == NULL)
      return 0;
     int d1=diameter(root->left);
     int d2=diameter(root->right);
     int left=calcheight(root->left);
     int right=calcheight(root->right);
     int d3=left+right+1;
           return max1(d1,d2,d3);
}
     int calcheight(node*&root){
            if(root==NULL)
             return 0;
             int lefthei=calcheight(root->left);
             int righthei=calcheight(root->right);
             return max(lefthei,righthei)+1;
        }
// recursive way to traverse the tree
void preorder(node *&root)
{
   if (root != NULL)
   {
      cout << root->data << " ";
      preorder(root->left);
      preorder(root->right);
   }
}
void inorder(node *&root)
{
   if (root != NULL)
   {

      inorder(root->left);
      cout << root->data << " ";
      inorder(root->right);
   }
}
void postorder(node *&root)
{
   if (root != NULL)
   {

      postorder(root->left);
      postorder(root->right);
      cout << root->data << " ";
   }
}
// ittrative method to print the tree
node *levelordertraversal(node *&root)
{
   queue<node *> q;
   q.push(root);
   while (!q.empty())
   {
      node *temp = q.front();
      cout << temp->data << " ";
      q.pop();
      if (temp->left)
         q.push(temp->left);
      if (temp->right)
         q.push(temp->right);
   }
}
node *rightview(node *&root)
{
   if (root == NULL)
      return NULL;

   queue<node *> q;
   q.push(root);
   while (!q.empty())
   {
      int n = q.size();
      for (int i = 0; i < n; i++)
      {
         node *temp = q.front();
         q.pop();
         if (i == n - 1)
            cout << temp->data << " ";
         if (temp->left != NULL)
            q.push(temp->left);
         if (temp->right != NULL)
            q.push(temp->right);
      }
   }
}
node *leftview(node *&root)
{
   if (root == NULL)
      return NULL;
       queue<node *> q;
   q.push(root);
   while (!q.empty())
   {
      int n = q.size();
      for (int i = 1; i <= n; i++)
      {
         node *temp = q.front();
         q.pop();
         if (i == 1)
            cout<< temp->data << " ";
         if (temp->left != NULL)
            q.push(temp->left);
         if (temp->right != NULL)
            q.push(temp->right);
      }
   }
      }
       int max(int a,int b)
       {
           if(a>b)
             return a;
            else
            return b;
       }
        
        

int main()
{
   node *root = new node(1);
   // root=insert(root);
   root->left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   //   print(root);
   // cout << "preorder:";
   // preorder(root);
   // cout<<endl;
   // cout << "inorder:";
   // inorder(root);
   // cout<<endl;
   // cout << "postorder:";
   // postorder(root);
   // cout<<endl;
    int ans1=diameter(root);
     cout<<ans1<<endl;
  // cout << "levelorder traversal is:" << endl;
  // levelordertraversal(root);
  // cout << endl;
  // rightview(root);
   //cout<<endl;
  // leftview(root);
  // int ans= calcheight(root);
  //  cout<<ans<<endl;
   return 0;
}
