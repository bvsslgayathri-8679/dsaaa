#include <bits/stdc++.h>
using namespace std;

class wall{
    public:
    double len;
    double br;
    wall(double a,double b)
    {
        len=a;
        br=b;
    }
    wall(wall &obj)
    {
        len=obj.len;
        br=obj.br;
    }
    void area()
    {
        cout<<"area of the wall is "<<len*br<<endl;
    }
};

int main(){
wall wall1(10.4,11.3);
wall wall2=wall1;
wall1.area();
wall2.area();
}