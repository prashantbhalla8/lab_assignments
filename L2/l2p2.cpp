#include <iostream>
using namespace std;
class Complex
{
    float r,i;//real part and imaginary part
    public:
    void setComplex (float a, float b)
    {
        r=a;
        i=b;
    }
    Complex sum(Complex a,Complex b)
    {
        Complex c;
        c.r=a.r+b.r;
        c.i=a.i+b.i;
        return c;
    }
    void displayComplex()
    {
        cout<<r<<"+"<<i<<"i\n";
    } 
};
int main()
{
    float r,i;
    Complex c1,c2;
    cout<<"Enter real and imaginary of complex 1\n";
    cin>>r;
    cin>>i;
    c1.setComplex(r,i);
    cout<<"Enter real and imaginary of complex 2\n";
    cin>>r;
    cin>>i;
    c2.setComplex(r,i);
    Complex c3;
    c3=c3.sum(c1,c2);
    c3.displayComplex();
}