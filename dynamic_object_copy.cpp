#include<bits/stdc++.h>
using namespace std;
 class Person
 {
    public:
    string name;
    int age;
    int height;
    Person(string name, int age, int height)
    {
        this->name=name;
        this->age = age;
        this->height=height;
    }
 };
int main()
{
    Person* a = new Person("Rakib",30,75);
    Person* b = new Person("Sakib",30,64);
    // b->name=a->name;
    // b->age=a->age;
    // b->height= a->height;
    *b=*a;
    delete a;
    cout<<b->name<<" "<<b->age<<" "<<b->height;
    return 0;
}