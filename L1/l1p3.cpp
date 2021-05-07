#include <iostream>
using namespace std;
namespace abc
// using namespace abc;
{
    int b=6;
    int c=7;
    int a=5;
}
namespace bcd
// using namespace bcd;
{
    int a=8;
    int b=9;
    int c=10;
}
int main()
{
    int a=35;
    int b=36;
    int c=37;
    cout<<"Value of a is "<<a<<"\n";
    cout<<"Value of b is "<<b<<"\n";
    cout<<"Value of c is "<<c<<"\n";
    cout<<"Value of a in abc "<<abc::a<<"\n";
    cout<<"Value of b in abc "<<abc::b<<"\n";
    cout<<"Value of c in abc "<<abc::c<<"\n";
    cout<<"Value of a in bcd "<<bcd::a<<"\n";
    cout<<"Value of b in bcd "<<bcd::b<<"\n";
    cout<<"Value of c in bcd "<<bcd::c<<"\n";
}