#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter search element";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
        cout<<"search element found at index "<<i;
        return 0;
        }
        if(i==n-1)
        {
            cout<<"search element not found\n";
        }
    }

}