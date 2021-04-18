#include<bits/stdc++.h>
using namespace std;
class mammal{
    public:
    mammal(){
        cout<<"im a mammal\n";
    }
};
class wing{
    public:
    wing(){
        cout<<"i have wings \n";
    }
};
class bat:public mammal,public wing{
    public:
    bat(){
        cout<<"hence i am a bat\n";
    }
};
int main(){
    bat b1;

}
