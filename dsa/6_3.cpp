#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> s;
    stack<char> s1;
    int d,t=n,ch;
    cin>>ch;
    char p;
    int b;
    switch(ch){
        case 0:exit(0);
        case 2:
            b=2;
        break;
        case 3:
           b=3;
        break;
        case 8:
            b=8;
        break;
        case 16:
        goto label;
        break;
        default:
        cout<<"enter crct choice\n";
    }
    while(n>0){
                d=n%b;
                s.push(d);
                n=n/b;
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();

    }
    label: while(n>0)
    {
        d=n%16;
        if(d<=9){
            s1.push(d+48);

        }
        else if(d>10)
        {
            s1.push(d+55);

        }
        n=n/16;
    }
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
}
