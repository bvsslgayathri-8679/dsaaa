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
        if(arr[n%s]==0)
        {
            arr[n%s]=n;
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
        cout<<arr[i]<<" is found at index "<<i<<endl;

    }
    
}