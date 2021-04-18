#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    stack<int> sta;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            i++;
            continue;
        }
        else if(isdigit(s[i])){
        int p=s[i]-48;
        sta.push(p);
        }
        else{
            int n1,n2;
            n1=sta.top();
            sta.pop();
            n2=sta.top();
            sta.pop();
            switch(s[i]){
            case '+':
            n1=n1+n2;
            sta.push(n1);
            
            break;
            case '-':
            n1=n2-n1;
            sta.push(n1);
            break;
            case '*':
            n1=n1*n2;
            sta.push(n1);
            break;
            case '/':
            n1=n2/n1;
            sta.push(n1);
            break; 
            default:break;   
            }
        }

    i++;
    }

    cout<<sta.top();
}