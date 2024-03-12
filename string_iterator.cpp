#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    // string:: iterator it;
    for(auto it=a.begin(); it<a.end(); it++)
    {
        cout<<*it<<endl;// it is a pointer so need to be dereference
    }
    return 0;
}