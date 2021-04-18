#include<bits/stdc++.h>
using namespace std;
class animal{
public:
void eat()
{
    cout<<"Animals eat food\n";
}

};

class dog:public animal{
public:
void bark(){
    cout<<"dogs bark\n";
}
};


int main(){
dog d1;
d1.eat();
d1.bark();
}