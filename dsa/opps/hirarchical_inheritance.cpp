#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    animal(){
        cout<<"I am an animal\n";
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"I can bark\n";
    }
};

class cat:public animal{
    public:
    void meaw(){
        cout<<"Meaw meaw!!\n";
    }
};

int main(){
    dog d1;
    d1.bark();

    cat c1;
    c1.meaw();
}