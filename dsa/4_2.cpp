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
        int key=round(floor(((n*0.618033)-floor(n*0.618033))*s));
        if(arr[key]==0)
        {
            arr[key]=n;
        }
        else{
            cout<<"overflow occured\nelement "<<n<<" cant be inserted \n";
        }
        cout<<"do u want to continue\n";
        cin>>ch;

    }
    for(int i=0;i<s;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
        else
        cout<<" - ";
    }
    
}