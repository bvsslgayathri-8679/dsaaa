#include<bits/stdc++.h>
using namespace std;
void toh(int n,char s,char a,char d)
{
    if(n==1)
    {
        cout<<"moved disc "<<n<<" from "<<s<<" to "<<d<<endl;
        return ;
    }
    toh(n-1,s,d,a);
    cout<<"moved disc "<<n<<" from "<<s<<" to "<<d<<endl;
    toh(n-1,a,s,d);
    return ;

}
int main(){
    int n;
    cin>>n;
    toh(n,'a','b','c');
}


