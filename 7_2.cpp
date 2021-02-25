#include<bits/stdc++.h>
using namespace std;
int queue1[20],rear=-1,front=-1,n;

void insert(int dn){
    if(rear==-1)
    {
        front=0;
        queue1[++rear]=dn;

    }
    else if(front!=0 && rear==n-1)
    {
        rear=-1;
         queue1[++rear]=dn;
        

    }
    else if(front==0 && rear==n-1|| rear+1==front)
    {
        cout<<"overflow\n";
        return ;
    }
    else{
        queue1[++rear]=dn;
  
    }
}
void display(){
    int i;
    if(front==-1)
    {
        cout<<"no element found";
        return ;
    }
    if(front<=rear)
    {
    for(i=front;i<=rear;i++)
    cout<<queue1[i]<<" ";
    }
    else if(rear<front)
    {
        for(i=front;i<=n-1;i++)
        cout<<queue1[i]<<" ";
        for(i=0;i<=rear;i++)
        cout<<queue1[i]<<" ";
    }
}
void deleteele(){
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==n-1 && front>rear){
        front=0;
        queue1[front++]=0;
        
    }
    else if(front==-1)
    {
        cout<<"underflow\n";
        
        return ;
    }
    else{
        queue1[front++]=0;
    }
}

int main(){
    int ch,ele,p;
    cin>>n;
    cout<<"choice\n1.insert\t2.display\t3.delete\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(0);
            case 1:cout<<"element \n";
            cin>>ele;
            insert(ele);
            break;
            case 2:
            display();
            break;
            case 3:
            deleteele();
            break;
            default:
            cout<<"enter correct choice";
        }
        cout<<"choice\n1.insert\t2.display\t3.delete\n";
    cin>>ch;
    }

}