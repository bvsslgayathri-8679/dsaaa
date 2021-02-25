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
    switch(ch){
        case 0:exit(0);
        case 1:
            while(n>0){
                d=n%2;
                s.push(d);
                n=n/2;
            }
        break;
        case 2:
            while(n>0){
                d=n%3;
                s.push(d);
                n=n/3;
            }
        break;
        case 3:
            while(n>0){
                d=n%8;
                s.push(d);
                n=n/8;
            }
        break;
        case 4:
            
            while(n>0){

                d=n%16;
                
                if(d<=9)
                {
                    s1.push(d+48);
                }
                else if(d>10){
                    s1.push(d+55);
                }
                n=n/16;
            }
             while(!s1.empty())
            {
             cout<<s1.top();
                s1.pop();
             }
             
            /* while(!s.empty())
            {
                if(s.top()>9)
                {
                    p=s.top()+55;
                    cout<<p;
                    s.pop();
                    continue;
                }
                cout<<s.top();
                s.pop();
            } */
        break;
        default:
        break;

    }
    
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}