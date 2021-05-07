#include<iostream>
using namespace std;
class student
{
    int marks,rollno;
    string name;
    public:
    student(void)
    {
        marks=rollno=0;
    }
    student(const int rollno)
    {
        this->rollno=rollno;
    }
    student(const int marks,const string name)
    {
        this->marks=marks;
        this->name=name;
    }
    student(const student &s1)
    {
        marks=s1.marks;
        name=s1.name;
        rollno=s1.rollno;
    }
    void displaydata()
    {
        cout<<"name:"<<name;
        cout<<
    }
};
int main()
{
    int marks,rollno;
    string name;
    cout<<"Enter name of a student\n";
    cin>>name;
    cout<<"Enter roll number of a student\n";
    cin>>rollno;
    cout<<"Enter marks of a student\n";
    cin>>marks;
    student s1(rollno);
    student s2(marks,name);
    student s3=s1;
}