//mid square
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
        int key;
        int t=n*n;
        string str=to_string(t);
        string str2= str.substr(2,str.length()-2);
        key=stoi(str2);
        if(arr[key]==0)
        {
            arr[key]=t; 
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