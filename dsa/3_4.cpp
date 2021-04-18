//merge sort

#include<bits/stdc++.h>
using namespace std;
int arr[20];
void merge_1(int arr[],int l,int m,int u)
{
    int i=l,j=m+1,k=l,arr1[20];
    while(i<=m && j<=u)
    {
        if(arr[i]>arr[j])
        {
            arr1[k]=arr[j];
            j++;
            
        }
        else if(arr[i]<=arr[j])
        {
            arr1[k]=arr[i];
            i++;
            
        }
        k++;
    }
    if(i>m)
    {
        while(j<=u)
        {
            arr1[k]=arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=m)
        {
            arr1[k]=arr[i];
            i++;
            k++;
        }
    }
        for(i=l;i<=u;i++){
        arr[i]=arr1[i];
        
    }
}
void mergesort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int m=(lb+ub)/2;
        mergesort(arr,lb,m);
        mergesort(arr,m+1,ub);
        merge_1(arr,lb,m,ub);

    }

}

int main(){
    int n,i,j,t;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}