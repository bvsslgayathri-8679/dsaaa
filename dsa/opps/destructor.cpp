#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    student(){
        cout<<"constructor invoked\n we are students\n";
    }
    ~student(){
        cout<<"destructor invoked\n";
    }
};
int main(){
student s1;
student s2;
}