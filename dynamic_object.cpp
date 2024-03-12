#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int sec;
    int marks;
    Student(int roll, int sec, int marks)
    {
        this->roll=roll;
        this->sec=sec;
        this->marks=marks;
    }
};

Student * fun()
{
    Student* Karim = new Student(5,10,20);
    return  Karim;
}
int main()
{
    // Student * Rahim= new Student(10,20,30);
    // cout<<Rahim->roll<<" "<<Rahim->sec<<" "<<Rahim->marks<<endl;

    Student * x=fun();
    cout<<x->marks<<" "<<x->roll<<" "<<x->sec<<endl;
    return 0;
}