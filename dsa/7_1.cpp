#include<bits/stdc++.h>
using namespace std;
int arr[20],front=-1,rear=-1,n;
int isfull(){
    if(front==0 && rear==n-1 || rear+1==front)
    {
        return 1;
    }
    else 
    return 0;


}
void enqueue(int ele){
    if(rear==-1)
    {
        front=0;
                arr[++rear]=ele;

    }

    
    else if(front!=0 && rear==n-1)
    {
        rear=0;
        arr[rear]=ele;
    }
    else if(isfull())
    {
        cout<<"overflow\n";
        
    }
    else{
        arr[++rear]=ele;
    }
}
int isempty(){
    if(front==-1 )
    return 1;
    else
    return 0;


}
void dequeue()
{
    if(isempty())
    {
        cout<<"underflow\n";
        
    }
    else if(front==n-1&& front>rear)
    {
        front=0;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        front++;
    }
}
void display(){
    if(!isempty()){
    int i;
    if(front>rear)
    {
    for(i=front;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    else{
        for(i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    }
    else{
        cout<<"queue is empty\n";
    }
}

int main(){
    int ch;
    
    cout<<"enter size,choice\n";
    cin>>n;
    cin>>ch;
    while(ch)
    {
        switch (ch)
        {
        case 0:exit(0);
        case 1:int ele;
        cout<<"ele\n";
        cin>>ele;
        enqueue(ele);
        break;
        
        case 2:
        dequeue();
        break;

        case 3: display();
        break;

        default:cout<<"crct choice\n";
            break;
        }
        cout<<"enter choice\n";
    cin>>ch;
    }

}