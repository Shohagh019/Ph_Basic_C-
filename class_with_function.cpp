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
    int cal()
    {
        int bmi= age*height/100;
        return bmi;
    }
 };
 int main()
 {
    Person a("Karim",10,200);
    int result = a.cal();
    cout<<a.name<<" "<< result<<endl;
     return 0;
 }