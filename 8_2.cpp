//singly linked lists

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
}*head=NULL,*temp;
int main(){
    int ch,n;
    cout<<"enter your choice\n";
    cin>>ch;
    while(ch)
    {
        cout<<"enter element to be inserted\n";
        cin>>n;
        node* newnode=new node;
        newnode->data=n;
        newnode->link=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else{
            temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=newnode;
        }
    cout<<"enter your choice\n";
    cin>>ch;

    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
