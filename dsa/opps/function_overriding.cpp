#include<bits/stdc++.h>
using namespace std;
class Base{
public:
virtual void print()
{
    cout<<"base class function details\n";
}

};

class derived:public Base{
public:
void print(){
    cout<<"derived class funtion details\n";
}
};


int main(){
derived d1;
d1.print();
}