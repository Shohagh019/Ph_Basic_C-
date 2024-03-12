#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int sec;
    Student(string name, int roll, int sec)
    {
        this->name=name;
        this->roll=roll;
        this->sec=sec;
    }
};
Student fun()
{
    Student x("Afifa", 20, 40);
    return x;
}
int main()
{
    Student a("Shakil", 100, 2);
    Student b("Kashem", 100, 2);
    Student c("Hashem", 100, 2);
    cout<<a.name<<" "<<a.roll<<" "<<a.sec;
    cout<<endl;
    Student x=fun();
    cout<<x.name<<" "<<x.roll<<" "<<x.sec;
    return 0;
}