#include<bits/stdc++.h>
using namespace std;

class room{
    public:
    double len,br,hei;
    double calculate_area()
    {
        return len*br;
    }
    double calculate_volume(){
        return len*br*hei;
    }

};


int main(){
    room r1;
    r1.len=10.2;
    r1.br=9.1;
    r1.hei=11.1;
    cout<<r1.calculate_area()<<" is area of room \n";
    cout<<r1.calculate_volume()<<" is the volume of room\n";
}
