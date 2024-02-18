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

      bool isbst(node* &root, node*min=NULL,node*max=NULL)
      {
            if(root==NULL)
             return true;
             if(min!=NULL && root->data<=min->data)
               return false;
             if(max!=NULL && root->data>=max->data)
               return false;

            bool isleft=isbst(root->left,min,root);
            bool isright=isbst(root->right,root,max);
            return isleft and isright;

      }
         
         int main()
         {
             node*root=new node(2);
             root->left=new node(1);
             root->right=new node(3);
             if(isbst(root,NULL,NULL))
               cout<<"valid bst"<<endl;
               else
               cout<<"not valid bst"<<endl;


         
         
         
         return 0;
         }