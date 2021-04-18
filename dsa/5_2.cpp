#include<bits/stdc++.h>
using namespace std;
int arr[20],front=-1,rear=-1,n;
int isfull(){
    if(rear==n-1)
    return 1;
    else 
    return 0;
}
void enqueue(int ele){
    if(rear==-1)
    {
        front=0;
    }
    if(!isfull())
    {
        arr[++rear]=ele;
        cout<<arr[rear];
        cout<<arr[front];
    }
    else{
        cout<<"overflow\n";
    }
}

int isempty(){
    if(front>rear|| front==-1)
    return 1;
    else 
    return 0;

}
void dequeue()
{
    if(!isempty())
    {
        front++;
    }
    else{
        cout<<"underflow\n";
    }
}
void display(){
    if(!isempty()){
    int i;
    for(i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
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