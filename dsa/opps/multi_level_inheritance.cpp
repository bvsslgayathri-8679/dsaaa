#include<bits/stdc++.h>
using namespace std;
class base{
public:
void print()
{
    cout<<"hello there\n";
}

};

class A:public base{};
class B:public A{};

int main(){
B b1;
b1.print();
}