#include<cstdlib>
#include<iostream>
using namespace std;
struct node{
    int data;
    node *pre,*next;
}*head=NULL,*temp;
void insert_beg(int n);
void insert_end(int n);
void insert_after(int n,int x);
void insert_before(int n,int x);
void delete_beg();
void delete_end();
void delete_node(int);
void display_for();
int main(){
    
    int ch,n,x;
    cout<<"enter your choice other than 0,\n 1)insert beginning\t 2)insert last\t 3)insert after a node\t  4)insert before a node\t 5)insert after a position\t 6)insert before a position\t 7)delete from beginning of list\t 8)delete from end of list\t 9)delete a node\t 10)displayforward\t 11)display backward\t 12)search node\t 13)reverse a linked list\t 14)update an element\t 15)sorting ll\n\n";
    cin>>ch;
    while(ch!=0)
    {
        switch (ch)
        {
        case 1:cout<<"enter the element to be inserted\n";
            cin>>n;
            insert_beg(n);
            break;
        case 2:cout<<"enter the element to be inserted\n";
            cin>>n;
            insert_end(n);
            break;
        case 3:
            cout<<"enter the element to be inserted\n";
            cin>>n;
            cout<<"enter the node after which element has to be entered\n";
            cin>>x;
            insert_after(n,x);
            break;
        case 4:
            cout<<"enter the element to be inserted\n";
            cin>>n;
            cout<<"enter the node before which element has to be entered\n";
            cin>>x;
            insert_before(n,x);
            break;
        case 7:
            delete_beg();
            break;
        case 8:
            delete_end();
            break;
        case 9:
            cout<<"enter the node after which element has to be entered\n";
            cin>>x;
            delete_node(x);
            break;
        case 10:
        display_for();
        break;
        default:
            break;
        }
        cout<<"enter your choice other than 0,\n 1)insert beginning\t 2)insert last\t 3)insert after a node\t  4)insert before a node\t 5)insert after a position\t 6)insert before a position\t 7)delete from beginning of list\t 8)delete from end of list\t 9)delete a node\t 10)displayforward\t 11)display backward\t 12)search node\t 13)reverse a linked list\t 14)update an element\t 15)sorting ll\n\n";
    cin>>ch;
    }
    return 0;
}
void insert_beg(int n){
    node* newnode=new node();
    newnode->data=n;
    newnode->pre=NULL;
    newnode->next=head;
    head=newnode;

}
void insert_end(int n){
    temp=head;
    node* newnode=new node();
    newnode->data=n;
    newnode->pre=NULL;
    newnode->next=NULL;
    if(temp==NULL){
        temp=newnode;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->pre=temp;
    }
}

void insert_after(int n,int x){
    node* newnode=new node();
    newnode->data=n;
    newnode->pre=NULL;
    newnode->next=NULL;
    temp=head;
    node *p;
    if(temp==NULL)
    {
        cout<<"cant insert element! empty ll\n";
    }
    else{
        int flag=0;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                flag=1;
                break;
            }
            temp=temp->next;
        }
        
        if(flag==1)
        {
            if(temp->next==NULL)
            {
                temp->next=newnode;
                newnode->pre=temp;
            }
            else{
            p=temp->next;
            p->pre=newnode;
            newnode->next=p;
            temp->next=newnode;
            newnode->pre=temp;
            }
        }
        else{
            cout<<"cant insert\n";
        }
    }
}
void insert_before(int n,int x){
    node* newnode=new node();
    newnode->data=n;
    newnode->pre=NULL;
    newnode->next=NULL;
    temp=head;
    node *p;
    if(temp==NULL)
    {
        cout<<"cant insert element! empty ll\n";
    }
    else{
        int flag=0;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                flag=1;
                
                break;
            }
            temp=temp->next;
        }
        if(flag==1)
        {
            if(temp->pre==NULL)
            {
                newnode->next=temp;
                temp->pre=newnode;
                head=newnode;
            }
            else{
            temp=temp->pre;
            p=temp->next;
            p->pre=newnode;
            newnode->next=p;
            temp->next=newnode;
            newnode->pre=temp;
            }
        }
        else{
            cout<<"cant insert\n";
        }
    }
}
void delete_beg(){
    if(head==NULL)
    {
        cout<<"cant delete\n";
    }
    else{
    temp=head;
    head=temp->next;
    temp->next=NULL;
    }
}
void delete_end(){
    temp=head;
    node *p;
    if(head==NULL)
    {
        cout<<"cant delete\n";
    }
    else{
        if(head->next==NULL){
            head=NULL;
        }
        else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        p=temp->pre;
        p->next=NULL;
        temp->pre=NULL;
        }
        free(temp);
    }
}
void delete_node(int x){
    temp=head;
    node *p,*q;
    if(head==NULL)
    {
        cout<<"cant delete\n";
    }
    else{
        if(head->next==NULL)
        {
            head=NULL;
        }
        else{
        while(temp->data!=x)
        {
            temp=temp->next;
            if(temp->next==NULL){
                cout<<"cant delete\n";
                goto label;
            }
        }
        if(temp->next==NULL)
        {
              p=temp->pre;
              p->next=NULL;     
        }
        else{
        p=temp->pre;
        q=temp->next;
        p->next=temp->next;
        q->pre=temp->pre;
        }
        }
        label:free(temp);

    }
}

void display_for()
{
    
    temp=head;
    if(head==NULL)
    {
        cout<<"empty ll\n";
    }
    else{
        cout<<"elements are\n";
        
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
            
        }
        cout<<endl;
    }
}
