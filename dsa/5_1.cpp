#include<bits/stdc++.h>
using namespace std;
int arr[100],top=-1,n;
int isfull(){
    if(top==n-1)
    {
        return 1;
    }
    return 0;
}
void pop(){
    if(!isempty())
    {
        top--;
    }
    else{
        cout<<"underflow\n";
    }
    
}
int isempty(){
    if(top==-1)
    {
        return 1;

    }
    return 0;
}

void display(){
    if(isempty())
    {
        cout<<"stack is empty\n";
    }
    else{
        int i;
        for(i=0;i<=top;i++)
        cout<<arr[i]<<" ";
        
    }
}

void push(int ele)
{
    if(!isfull())
    {
        arr[++top]=ele;
        cout<<arr[top]<<endl;
    }
    else{
        cout<<"stack overflow!";
        display();
    }
}
int main(){
    int ch,i,ele;
    cin>>n;
    cout<<"enter yr choice\n";
    cin>>ch;
    while(ch!=0){
    switch(ch)
    {
    case 0:
        exit(0);
    case 1:
        cin>>ele;
        push(ele);
        break;
    case 2:
        pop();
        break;
    case 3:
    display();
    break;
    default:
        break;
    }
    cout<<"enter yr choice\n";
    cin>>ch;
    }

}