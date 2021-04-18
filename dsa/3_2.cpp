#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,t;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        int k=arr[i];
        for(j=i-1;j>=0 && arr[j]>k;j--)
        {
            
            arr[j+1]=arr[j];

        }
        arr[j+1]=k;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}