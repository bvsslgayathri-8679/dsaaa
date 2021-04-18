//gcd

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b%a==0){
        return a;
    }
    return gcd(b%a,a);
}

int main(){
int a,b;
cin>>a>>b;
if(a>b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
cout<<gcd(a,b);
}