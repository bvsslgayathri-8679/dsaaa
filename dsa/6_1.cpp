#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    stack<int> s;
    cin>>n;
    for(i=n;i>0;i--)
    {
        s.push(i);
    }             
    int f=1;
    while(!s.empty())
    {
        f*=s.top();
        s.pop();
    }           
    cout<<f<<" is the factorial of "<<n;                              
}