//digit folding
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s,ch=1;
    cout<<"size of table s";
    cin>>s;
    int arr[s]={0};
    while(ch)
    {
        cin>>n;
        int key=0;
        int t=n;
        while(n>0)
        {
            key+=n%100;
            n=n/100;
        }
        
        if(arr[key]==0)
        {
            arr[key]=t;
            
            key=0;
        }
        else{
            cout<<"overflow occured\nelement "<<t<<" cant be inserted \n";
        }
        cout<<"do u want to continue\n";
        cin>>ch;

    }
    for(int i=0;i<s;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" is found at index "<<i<<endl;
    }
}