#include<iostream>
#include<string>
using namespace std;
struct Student
{
   string name;
   int roll; float marks;
   void setStudentData()
   {
       cin>>name;
       cin>>roll;
       cin>>marks;
   }
   void getStudentData()
   {
       cout<<name<<"\n";
       cout<<roll<<"\n";
       cout<<marks<<"\n";
   }
};
int main()
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].setStudentData();
    }
    for(i=0;i<3;i++)
    {
        s[i].getStudentData();
    }
    
}