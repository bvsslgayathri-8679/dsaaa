//quick sort

#include<bits/stdc++.h>
using namespace std;

int partition_1(int arr[],int lb,int ub)
{
    int start=lb,end=ub,pivot=arr[lb],t;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            t=arr[start];
            arr[start]=arr[end];
            arr[end]=t;
        }

    }
    t=arr[end];
    arr[end]=arr[lb];
    arr[lb]=t;

    return end;
}

void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition_1(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }
}

int main(){
    int n,i,j,t;
    int arr[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}