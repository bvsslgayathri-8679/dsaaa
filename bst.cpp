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
int main(){
    cout<<"insert\n";
    root=insert(root,5);
    cout<<"insert\n";
  
    root=insert(root,6);
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,9);
    cout<<"display\n";

    display(root);
    cout<<"delete 9"<<endl;
    deletenode(root,9);
    cout<<"display\n";
    display(root);
    cout<<"delete 3"<<endl;
    deletenode(root,3);
    cout<<"display\n";
    display(root);
    cout<<"delete 5"<<endl;
    deletenode(root,5);
    cout<<"display\n";
    display(root);
}
