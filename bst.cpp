#include<iostream>
#include<queue>
using namespace std;
class node
{
   public:
      int data;
      node*left;
      node*right;
         node(int data)
         {
              this->data=data;
              this->left=NULL;
              this->right=NULL;
         }
};
   node*insert(node* &root,int val)
   {
        
          if(root==NULL)
           {
              root=new node(val);
                return root;
           }   
              if(val>root->data)
               root->right=insert(root->right,val);
               else
               root->left=insert(root->left,val);
                 return root;
   }


       void takeinput(node* &root)
    {
         int data;
          cin>>data;
             while(data!=-1)
             {
                 root=insert(root,data);
                 cin>>data;
             }
    }
     node*levelordertraverse(node* &root)
    {
          queue<node *> q;
         q.push(root);
          //q.push(NULL);
      while(!q.empty())
   {
      node *temp = q.front();
      cout << temp->data << " ";
      q.pop();
      if (temp->left)
         q.push(temp->left);
      if (temp->right)
         q.push(temp->right);
   }
       cout<<endl;
}
    bool search(node* &root,int elm)
    {
          // if(root==NULL)
            //  return false;

            //  if(root->data==elm)
              //  return true;
            //  if(root->data<elm)
            //   return search(root->right,elm);
             //  else
             //  return search(root->left,elm);// t.c-O(n) s.c-O(H) h-height of tree 
             //so this soluton is not acceptable
                 node*temp=root;
                 if(root==NULL)
                   return false;
                   while(temp!=NULL)
                   {
                      if(temp->data==elm)
                        return true;
                       if(temp->data>elm)
                         temp=temp->left;
                        else
                        temp=temp->right;
                   }
                      return false;
    }  
// the inorder traverse gives the sorting order of bst
     void inorder(node* &root)
     {
          if(root!=NULL)
           {
               inorder(root->left);
               cout<<root->data<<" ";
               inorder(root->right);
           }
     }
         node*min(node* &root)
         {
             if(root==NULL)
               return NULL;
             if(root->left==NULL && root->right==NULL)
                return root;
                //recursive method
               // if(root->left!=NULL)
               //  root=min(root->left);
                // return root;
                //ittrative method
                  node*temp=root;
                  while(temp->left!=NULL)
                  {
                     temp=temp->left;
                  }
                    return temp;
         }
            node*max(node* &root)
            {
                  
                if(root==NULL)
               return NULL;
             if(root->left==NULL && root->right==NULL)
                return root;
                //recursive method
               // if(root->right!=NULL)
               //  root=max(root->right);
               //  return root;
                //ittrative method
                 node*temp=root;
                  while(temp->right!=NULL)
                  {
                     temp=temp->right;
                  }
                    return temp;
         }
  node *deletenode(node *&root, int val)
{
    if (root == NULL)
        return root;
    if (val == root->data)
    {
        // 0 child or leaf node
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child-

        // 1 left child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // 1 right child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = min(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            return root;
        }
    }
    else if (val > root->data)
    {
        root->right = deletenode(root->right, val);
        return root;
    }
    else
    {
        root->left = deletenode(root->left, val);
        return root;
    }
}
      
    
                    int main()
                 {
                    node*root=NULL;
                    cout<<"enter the data:"<<endl;
                    takeinput(root);
                   // levelordertraverse(root);
                   // if(search(root,15))
                   // cout<<"element is found"<<endl;
                   // else
                   // cout<<"element is not found"<<endl;
                    // inorder(root);
                    // node*ans=min(root);
                    // cout<<ans->data<<endl;
                   // node*ans1=max(root);
                    // cout<<ans1->data<<endl;
                    root= deletenode(root,32);
                     levelordertraverse(root);
                      return 0;
                 }