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
    int fm,fm1=1,fm2=0;
    fm=fm1+fm2;

    while(n>fm)
    {
        fm2=fm1;
        fm1=fm;
        fm=fm1+fm2;
    }
    int off=0,c=0,l;
    while(c<=n+1)
    {
        l=fm2+off;
        if(l<n)
        {
            i=l;
        }
        else
        i=n;

        if(arr[i]==s)
        {
            cout<<"element found at index "<<i;
            return 0;
        }
        else if(arr[i]>s)
        {
            fm=fm2;
            fm1=fm1-fm;
            fm2=fm-fm1;
            c+=1;
        }
        else{
            fm=fm1;
            fm1=fm2;
            fm2=fm-fm1;
            off=i;
            c+=1;
        }
    }
    cout<<"element not found\n";

}
