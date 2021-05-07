#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float marks;
    public:
    void getStudentData()
    {
        cin>>marks;
        cin>>roll;
        cin>>name;
    }
    void disStudentData()
    {
        cout<<"The marks of"<<name<<"("<<roll<<")"<<"is"<<marks;
    }
};
int main()
{
    int n,i;
    cout<<"Enter the number of students \n";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].getStudentData();
    }
    for(i=0;i<n;i++)
    {
        s[i].disStudentData();
    }
}