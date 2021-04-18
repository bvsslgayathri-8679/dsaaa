#include<bits/stdc++.h>
using namespace std;


class Count{
    
    private:int value;
    public:
    
    Count():value(5){}
    void operator ++(){
        ++value;
    }
    void display(){
        cout<<value;
    }
};


int main(){
    Count c;
    ++c;
    c.display();

}