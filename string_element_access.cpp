#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<" "<<s.front()<<" "<<s[s.size()-1]<<" "<< s.back()<<endl;
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(char c:s)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}