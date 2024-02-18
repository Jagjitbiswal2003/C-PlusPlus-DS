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
  int data;
  cout << "enter the data to insert" << endl;
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
node *traverse(node *&root)
{
  queue<node *> q;
  q.push(root);
  while (!q.empty())
  {
    node *temp = q.front();
    cout << temp->data << " ";
    q.pop();
    if (root->left)
      q.push(temp->left);
    if (root->right)
      q.push(temp->right);
  }
}
int height(node *&root)
{
  if (root == NULL)
    return 0;
  int left = height(root->left);
  int right = height(root->right);
  return max(left, right) + 1;
}
int max(int a, int b)
{
  if (a >= b)
    return a;
  else
    return b;
}
int diameter(node *&root)
{
  if (root == NULL)
    return 0;
  int d1 = diameter(root->left);
  int d2 = diameter(root->right);
  int left = height(root->left);
  int right = height(root->right);
  int d3 = left + right + 1;
  return max(d1, max(d2, d3));
}
node *lca(node *&root, int n1, int n2)
{
  if (root == NULL)
    return NULL;
  if (root->data == n1 || root->data == n2)
    return root;
  node *left = lca(root->left, n1, n2);
  node *right = lca(root->right, n1, n2);
  if (left != NULL && right != NULL)
    return root;
  else if (left != NULL && right == NULL)
    return left;
  else if (left == NULL && right != NULL)
    return right;
  else
    return NULL;
} 
   bool isbalancde(node* &root,int*hei)
   {
      if(root==NULL)
      return true;
      int lh=0; int rh=0;
        if(isbalancde(root->left, &lh)==false);
          return false;
        if(isbalancde(root->right, &rh)==false)
             return false;
            *hei=max(lh,rh)+1;
            if(abs(lh-rh)<=1)
              return true;
            else
            return false;
      
   }
       bool identical(node* &root1,node* &root2)
       {
            if(root1==NULL && root2==NULL)
              return true;
            if(root1==NULL && root2!=NULL || root1!=NULL && root2==NULL)
             return false;
             bool left=identical(root1->left,root2->left);
             bool right=identical(root1->right,root2->right);
             bool val=root1->data==root2->data;
                 if(left && right && val)
                   return true;
                  else 
                  return false;
       }

int main()
{
  node *root1 = new node(1);
  root1->left=new node(2);
  root1->right=new node(3);
  node*root2=new node(1);
  root2->left=new node(2);
  root2->right=new node(3);
  // insert(root);

 // root->left = new node(2);
  //root->right = new node(3);
  //root->left->left = new node(4);
 // root->left->right = new node(5);
 // root->left->right->left = new node(6);
 // root->right->right = new node(7);
  //  traverse(root);
  //  int ans=height(root);
  // cout<<ans<<endl;
  // int dia=diameter(root);
  // cout<<"the diameter is:"<<dia<<endl;
 // node *ans = lca(root, 4, 5);
 // cout << ans->data << endl;
     // int height=0;
      // if(isbalancde(root, &height)==true)
       //   cout<<"the tree is balanced"<<endl;
       //   else
        //  cout<<"the tree is not balanced"<<endl;
         if(identical(root1,root2))
             cout<<"tree is identical";
          else 
          cout<<"tree is not identical";
  return 0;
}