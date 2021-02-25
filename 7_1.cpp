//priority queue
#include<bits/stdc++.h>
using namespace std;
int queue1[20],priority[20],rear=-1,front=-1,n;

void insert(int ele,int p)
{
    if(rear==-1)
    {
        rear=0,front=0;
        queue1[rear]=ele;
        priority[rear]=p;
        
    }
    else if(rear==n-1 && front==0)
    {
        cout<<"overflow\n";
        return ;
    }
    else{
        queue1[rear]=ele;
        priority[rear]=p;
        
    }
    int i,j;
        for(i=front+1;i<=rear;i++)
        {
            for(j=i-1;j>=front;j--)
            {
                if(priority[j+1]>priority[j])
                {
                    priority[j+1]=priority[j+1]+priority[j];
                    priority[j]=priority[j+1]-priority[j];
                    priority[j+1]=priority[j+1]-priority[j];


                    queue1[j+1]=queue1[j+1]+queue1[j];
                    queue1[j]=queue1[j+1]-queue1[j];
                    queue1[j+1]=queue1[j+1]-queue1[j];
                }

            }
        }
        rear++;
                
    
}
void display()
{
    int i;
    if(front==-1||front>rear)
       cout<<"no element found";
    else{
    for(i=front;i<rear;i++)
    {
        cout<<"element is "<<queue1[i]<<" and priority is "<<priority[i]<<endl;
    }
    }
}
void deleteele(){
    if(front==rear)
    {
        cout<<"underflow\n";
        return ;
    }
    cout<<"deleting "<<queue1[front]<<endl;
    queue1[front]=0;
    priority[front]=0;
    front++;
}
int main(){
    int ch,ele,p;
    cout<<"choice\n1.insert\t2.display\t3.delete\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(0);
            case 1:cout<<"element and its priority\n";
            cin>>ele>>p;
            insert(ele,p);
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