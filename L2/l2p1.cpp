#include<iostream>
using namespace std;
class sample
{
    int a=7;
    int b=8;
    public:
    int c=5;
    int d=6;
    void getab()
    {
        cout<<"a="<<a<<"\tb="<<b<<"\n";
    }
};
int main()
{
    cout<<"Value of public members c & d \n";
    sample s;//creation of object to acess class
    cout<<"c="<<s.c<<"\td="<<s.d<<"\n";
    cout<<"Value of private members a & b \n";
    //cout<<"a="<<s.a<<"b="<<s.b<<"\n";
    //Above satement will show erreor if executed because a and b are private to acess a and b we need to create public function
    s.getab();
}