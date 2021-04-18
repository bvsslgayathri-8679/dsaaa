#include<bits/stdc++.h>
using namespace std;

template <typename T>
class weight{
    private:T kg;
    public:
    void set_data(T x){
        kg=x;
    }
    T get_data()
    {
        return kg;
    }
};

int main(){
    weight<int> obj1;
    obj1.set_data(12);
    cout<<obj1.get_data()<<endl;
    weight<float> obj2;
    obj2.set_data(2.2);
    cout<<obj2.get_data()<<endl;
}