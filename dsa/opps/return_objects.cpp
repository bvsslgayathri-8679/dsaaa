#include<bits/stdc++.h>
using namespace std;
class student{
public:int m1,m2,m3;

};

student get_data(int a,int b,int c)
{
    student s;
    s.m1=a;
    s.m2=b;
    s.m3=c;
    return s;
}

int main()
{
    student s1=get_data(12,14,16);
    cout<<s1.m1<<s1.m2<<s1.m3;
}