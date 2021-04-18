#include<bits/stdc++.h>
using namespace std;


class Count{
    private:
    int value;
    public:
    Count():value(5){}
    Count operator ++(){
        Count c1;
        c1.value=++value;
        return c1;
    }
    Count operator ++(int){
        Count c1;
        c1.value=value++;
        return c1;
    }
    void display(){
        cout<<value<<endl;
    }

};
int main(){
    Count c,r;
    r=++c;
    r.display();
    r=c++;
    r.display();
}