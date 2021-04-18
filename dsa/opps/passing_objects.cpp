#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int marks;
    student(int n)
    {
        marks=n;
    }

};


void average(student s1,student s2)
{
    cout<<" average is "<<(s1.marks+s2.marks)/2;
}
int main(){
    student s1(88),s2(99);
    average(s1,s2);
}
