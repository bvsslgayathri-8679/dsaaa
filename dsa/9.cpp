#include<bits/stdc++.h>
using namespace std;

int tree[100];
void left_subtree(int n,int p)
{
    int i=p*2+1;
    if(tree[p]=='\0')
    {
        cout<<"parent node "<<p<<" is empty\n";
    }
    if(p>=0 && tree[p]!='\0')
    {
        tree[i]=n;
    }
}
void right_subtree(int n,int p)
{
    int i=p*2+2;
    if(tree[p]=='\0')
    {
        cout<<"parent node "<<n<<" is empty\n";
    }
    if(p>=0 && tree[p]!='\0')
    {
        tree[i]=n;
    }
}
void root(int c){
    if(tree[0]=='\0')
    {
        tree[0]=c;
    }
}
int get_left(int n){
    if(tree[n]!='\0' && n*2+1<20 && tree[n*2+1]!='\0')
    {
        return n*2+1;
    }
    return -1;
}
int get_right(int n){
     if(tree[n]!='\0' && n*2+2<20  && tree[n*2+2]!='\0')
    {
        return n*2+2;
    }
    return -1;
}
void preorder(int n){
    if(n>=0 && tree[n]!='\0')
    {
        preorder(get_left(n));
        preorder(get_right(n));
        cout<<tree[n]<<" ";
    }
}
void display()
{
    int i;
    for(i=0;i<20;i++)
    {
        if(tree[i]!='\0')
        cout<<tree[i]<<" ";
        else
        cout<<"- ";
    }
}
int main(){
    
    int ch,p;
    int n;
    cin>>n;
    tree[n]={'\0'};
    cout<<"choice\n 1.left subtree  2.right subtree insertion   3.preorder   4.display  \n";
    cin>>ch;
    root(5);
    while(ch!=0)
    {
        switch (ch)
        {
        case 0:exit(0);
        case 1:
        cout<<"enter element to be inserted and parent node\n";
        cin>>n>>p;
        left_subtree(n,p);
        break;
        case 2:
        cout<<"enter element to be inserted and parent node\n";
        cin>>n>>p;
        right_subtree(n,p);
        break;
        case 3:cout<<"enter position of preorder traversal\n";
        cin>>n;
        preorder(n);
        case 4:display();
        break;
        default:
            break;
        }
        cout<<"choice\n 1.left subtree  2.right subtree insertion   3.preorder   4.display  \n";
    cin>>ch;
    }

}