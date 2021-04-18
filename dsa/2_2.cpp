#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s;
    int arr[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    int m,l=0,h=n-1;
    m=(l+h)/2;
    while(l<=h)
    {
        if(arr[m]==s)
        {
            cout<<"element found at location "<<m;
            return 0;
        }
        else if(arr[m]>s)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    m=(l+h)/2;
    }
    cout<<"element not found ";

}