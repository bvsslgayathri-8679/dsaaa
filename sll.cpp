#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
}*head=NULL,*temp;
void insert_beg(int n);
void insert_end(int n);
void display();
int insert_after(int n,int x);
int insert_before(int n,int x);
void reverse();
void delete_node(int n);
int length();
void search(int n);
void sort();
void delete_beg();
int delete_end();
void insert_middle(int);
void insert_after_loc(int n,int loc);

int main(){
    
    cout<<"enter your choice\t0.exit\t1.insert_beginning\t2.insert_end\t3.insert_after\t4.insert_before\t5.delete_node\t6.delete_end\t7.delete_beginning\t8.display\t9.search_node\t10.length_of_ll\t11.reverse_ll\t12.sort\t13.insert_after_loc\t14)insert_middle\n\n";
    int ch,n,x;
    cin>>ch;
    while(ch!=0)
    {
    switch(ch)
    {
        case 0:exit(0);
        case 1:cout<<"enter element to be inserted\n";
        cin>>n;
        insert_beg(n);
        break;
        case 2:
        cout<<"enter element to be inserted\n";
        cin>>n;
        insert_end(n);
        break;
        case 3:
        cout<<"enter element to be inserted\n";
        cin>>n;
        cout<<"enter the node after which it has to be inserted\n";
        cin>>x;
        x=insert_after(n,x);
        break;
        case 4:
        cout<<"enter element to be inserted\n";
        cin>>n;
        cout<<"enter the node before which it has to be inserted\n";
        cin>>x;
        insert_before(n,x);
        break;
        case 5:
        cout<<"enter node to be deleted\n";
        cin>>n;
        delete_node(n);
        break;
        case 6:
        delete_end();
        break;
        case 7:
        delete_beg();
        break;
        case 8:
        cout<<"elements are";
        display();
        break;
        case 9:
        cout<<"enter node to be searched\n";
        cin>>n;
        search(n);
        break;
        case 10:
        length();
        break;
        case 11:
        cout<<"before reversing\n";
        display();
        reverse();
        cout<<"after reversing\n"<<endl;
        display();
        break;
        case 12:cout<<"before\n";
        display();

        sort();
        cout<<"after\n";
        display();
        break;
        case 13:
        cout<<"enter element to be inserted\n";
        cin>>n;
        cout<<"enter the node location before which it has to be inserted\n";
        cin>>x;
        insert_after_loc(n,x);
        break;
        case 14:
        cout<<"enter element to be inserted\n";
        cin>>n;
        insert_middle(n);
        break;
        default:
        cout<<"plzz check the choice u entered\n";
        
    }
    
    cout<<"enter your choice\t0.exit\t1.insert_beginning\t2.insert_end\t3.insert_after\t4.insert_before\t5.delete_node\t6.delete_end\t7.delete_beginning\t8.display\t9.search_node\t10.length_of_ll\t11.reverse_ll\t12.sort\t13.insert_after_loc\n\n";
   cin>>ch;
    }
    return 0;
}

void insert_beg(int n)
{
    node* newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    
}
void insert_end(int n)
{
    node* newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    if(head==NULL)
    temp=head=newnode;
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        cout<<"inserted\n";
    }
}
void insert_middle(int n)
{
    node* newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    int len=length();
    if(len==0)
    {
        head=newnode;
        newnode->next=temp;

    }
    else{
    if(len%2!=0)
    {
        len=(len+1)/2;
    }
    else{
        len=len/2;
    }
    
    
    
    int i=0;
    temp=head;
    while(i<len-1)
    {
        temp=temp->next;
        i++;
    }
    
    
    newnode->next=temp->next;
    temp->next=newnode;
    
    }
    
}
void display(){
    
    temp=head;
    if(head==0)
    {
        cout<<"empty ll"<<endl;
        
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        
    }
}
int insert_after(int n,int x)
{
    node* newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    
    temp=head;
    int flag=0;
    if(head==NULL)
    {
    cout<<"cant insert\n";
    return 0;
    }
    while(temp!=NULL)
    {
        
        if(temp->data==x)
        {
            flag=1;
        break;
        }
        temp=temp->next;
    }
    if(flag==0)
    {
        cout<<"cant insert \n";
        return 0;
    }
    if(flag==1)
    {
    newnode->next=temp->next;
    temp->next=newnode;
    }
    return 0;
}
int insert_before(int n,int x)
{
    node* newnode=new node();
    node *p;
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    if(head==NULL)
    {
        cout<<"cant insert ";
    }
    else{
        int flag=0;
        if(head->next==NULL || head->data==x)
        {
            head=newnode;
            newnode->next=temp;
        }
        
        else{
             while(temp->next!=NULL)
             {
        p=temp;
        temp=temp->next;
        if(temp->data==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        p->next=newnode;
        newnode->next=temp;
    }
    else
    {
        cout<<"cant insert\n";
        return 0;
    }

        }
    }
    return 0;

    
}
void reverse()
{
    struct node *pre,*curr,*nextnode;
    pre=NULL;
    curr=nextnode=head;
    while(nextnode!=NULL)
    {
    nextnode=nextnode->next;
    curr->next=pre;
    pre=curr;
    curr=nextnode;
    }
    head=pre;

}

void search(int n){
    temp=head;
    if(temp==NULL)
    {
        cout<<"no elements!!cant search\n";

    }
    else{
        int flag=1,c=0;
        while(temp->data!=n)
        {
            if(temp->next==NULL)
            {
                flag=0;
            }
            temp=temp->next;
            c+=1;
        }
        if(flag==1)
        {
            cout<<"search element "<<n<<"found at loc "<<c<<endl;
        }
        else{
            cout<<"search element not found\n";
        }
    }
}


int length(){
    temp=head;
    int c=0;
    if(head==0)
    {
        return 0;
        
    }
    
    else{
    while(temp!=NULL)
    {
            c+=1;
            temp=temp->next;
    }
    return c;
        
    }
}
void delete_beg(){
    temp=head;
    if(head==NULL)
    {
        cout<<"cant delete\n";

    }
    else{
        head=temp->next;
        temp->next=NULL;
    }
}
int delete_end(){
    temp=head;
    node *p;
    if(head==NULL)
    {
        cout<<"cant delete\n";
    }
    else{
        if(temp->next==NULL)
        {
            head=NULL;
            free(temp);
            return 0;
        }
    while(temp->next!=NULL)
    {
        p=temp;
        temp=temp->next;
    }
    
    p->next=NULL;
    
    free(temp);
    }
}
void delete_node(int n){

node *p=head;
    temp=head;
    int flag=0;
    cout<<head;
    if(head==NULL)
    {
        cout<<"cant delete!!\n";
        
    }
    
    else{

        while(temp->data!=n &&temp!=NULL)
        {
            p=temp;
            temp=temp->next;

        }
        if(temp==head)
        head=NULL;
        else
        p->next=temp->next;
        free(temp);
        
    }
}
void sort()
{
    node *temp1;
    if(head==NULL)
    {
        cout<<"cant sort\n";
    }
    temp=head;
    int t;
    while(temp!=NULL)
    {
        
        temp1=temp->next;

        while(temp1!=NULL)
        {
            
            if(temp->data>temp1->data)
            {
                
                t=temp->data;
                temp->data=temp1->data;
                temp1->data=t;
                
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
}
void insert_after_loc(int n,int loc)
{
    
    
    node* newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    if(newnode==NULL)
    printf("over flow!! \n");
    
    else{
        
        newnode->data=n;
        temp=head;
        for(int i=0;i<loc-1;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                cout<<"cant insert\n";
                exit(0);
            }
        }
        newnode->next=temp->next;
        
        temp->next=newnode;
        cout<<"inserted\n";
    
    }

}
