#include<bits/stdc++.h>
using namespace std;

class room{
    private:
    double len,br,hei;
    public:
    void get_data(double a,double b,double c)
    {
        len=a;
        br=b;
        hei=c;
        
    }
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
    r1.get_data(9.8,12.3,15.5);
    cout<<r1.calculate_area()<<" is area of room \n";
    cout<<r1.calculate_volume()<<" is the volume of room\n";
}