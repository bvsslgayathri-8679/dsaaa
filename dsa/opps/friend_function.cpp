#include<bits/stdc++.h>
using namespace std;


class student{
  private:int marks;
    public:
    student(){
        marks=100;

    }
    void printmarks()
    {
        cout<<marks<<endl;
    }
    //prototype
    friend void subtract(student &s);
};

void subtract(student &s){
    s.marks-=20;
}
int main(){
    student s1;
    s1.printmarks();
    subtract(s1);
    s1.printmarks();
}