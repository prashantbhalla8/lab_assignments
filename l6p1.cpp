#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    public:
    double area(double a)
    {
        return(sqrt(3)*a*a)/4;
    }
    double area(double a,double b)
    {
        return (b*sqrt(a*a-(b*b)/4));
    }
    double area(double a,double b,double c)
    {
        double s,p;
        s=(a+b+c)/2;
        return (sqrt(s*(s-a)*(s-b)*(s-c)));
    }
};
int main()
{
    char ch;
    cout<<"1.Equilateral\n2.Isocles\n3.Scalen\n";
    cout<<"Enter your choice 1/2/3 or e/i/s \n";
    cin>>ch;
    if(ch=='e'||ch=='1')
    {
        cout<<"Equilateral triangle\n";
        cout<<"Enter the side length";
        double a;
        cin>>a;
        triangle eq;
        float ar;
        ar=eq.area(a);
        cout<<"The area of equilateral triangle = "<<ar<<"\n";
    }
    else if (ch=='i'||ch=='2')
    {
        cout<<"Isocles triangle\n";
        cout<<"Enter the value of equal lengths \n";
        double a,b;
        cin>>a;
        cout<<"Enter the unique side length\n";
        cin>>b;
        triangle iso;
        float ar;
        ar=iso.area(a,b);
        cout<<"The area of isocles triangle = "<<ar<<"\n";
    }
   else if (ch=='s'||ch=='3')
   {
       cout<<"Scalen triangle\n";
       cout<<"Enter length of all sides\n";
        double a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        triangle sc;
        float ar;
        ar=sc.area(a,b,c);
        cout<<"The area of scalen triangle = "<<ar<<"\n";
   }
   else
   cout<<"Wrong choice";
}