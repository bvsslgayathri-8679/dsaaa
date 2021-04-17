#include<bits/stdc++.h>
using namespace std;

struct node{
    int n;
    node* left,*right;
}*root,*temp;
node* insert(node * root,int n)
{
    temp=root;
    if(temp==NULL)
    {
      node* newnode;
       newnode =new node;
       newnode->n=n;
       newnode->left=newnode->right=NULL;
       return newnode;
    }
    else if(n<temp->n)
    {
        temp->left=insert(temp->left,n);
    }
    else if(n>temp->n)
    {
        temp->right=insert(temp->right,n);
    }
    return root;
}
node * display(node * node)
{
    if(node==NULL)
    return node;
    display(node->left);
    cout<<node->n<<" ";
    display(node->right);
    
    return node;
}
node* minimum(node* root)
{
    while(root->left!=NULL && root!=NULL)
    {
        return minimum(root->left);
    }
    return root;
}
node* deletenode(node* root,int n){
    if(root==NULL)
    {
        return root;
    }
    else if(n<root->n)
    {
        
        root->left=deletenode(root->left,n);
        
    }
    else if(n>root->n)
    {
        
        root->right=deletenode(root->right,n);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        {
            root=NULL;
            free(root);
        }
        else if(root->left==NULL)
        {
            node* temp=root;

            root=root->right;
            free(temp);
        }
        else if(root->right==NULL)
        {
            node* temp=root;
            root=root->left;
            free(temp);
        }
        else{
                node* temp=minimum(root->right);
                root->n=temp->n;
                root->right=deletenode(root->right,temp->n);

        }
    }
    return root;
}

void printTree(node *root, string indent, bool last) 
{
 if (root != nullptr) 
 {
 cout << indent;
 if (last) 
 {
 cout << "R----";
 indent += " ";
 } else 
 {
 cout << "L----";
 indent += "| ";
 }
 cout << root->n << endl;
 printTree(root->left, indent, false);
 printTree(root->right, indent, true);
 }
}


int main(){
    int ch,n;
    node *root=NULL,*temp;
    cout<<"enter yr choice.1.insertion\t2.inorder\t3.postorder\t4.preorder\t5.search node\tdelete node\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(1);
            case 1:
            cout<<"Enter the element to be inserted\n";
            cin>>ch;
            root=insert(root,ch);
            break;
           case 2:display(root);
           break;
           case 3:
           printTree(root," ",true);
           break;
            case 4:cout<<"enter the element to be deleted\n";
            cin>>ch;
            root=deletenode(root,ch);
        }
        cout<<"\nenter your choice.\n";
        cin>>ch;
    }  
}
