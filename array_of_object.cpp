#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int roll;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>a[i].name>>a[i].age>>a[i].roll;
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].roll<<endl;
    // }
    // if string with spaces
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age>>a[i].roll;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].roll<<endl;
    }
    return 0;
}