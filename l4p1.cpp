#include<iostream>
using namespace std;
class def_constr
{
    public:
    def_constr()
    {
        cout<<"Default constructor called\n";
    }
};
class arg_constr
{
    public:
    arg_constr(int b)
    {
        cout<<"Single Argument constructor called\n";
    }
};
class copy_constr
{
    public:
    int x1,y1;
    copy_constr(int x,int y)
    {
        cout<<"Double Argument constructor called\n";
        x1=x;
        y1=y;
    }
    copy_constr(copy_constr &a)
    {
        cout<<"Copy constructor called\n";
        x1=a.x1;
        y1=a.y1;
        cout<<"Contents copied\n";
    }
};
int main()
{
    def_constr d;//no argument constructor calles
    arg_constr a(6);//single argument constructor called
    copy_constr c1(5,6);//double argument constructor called
    copy_constr c2=c1;//copy constructor called
}