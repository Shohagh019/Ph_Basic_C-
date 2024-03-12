#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string s;
    // getline(cin,s); //use getline when string with spaces
    // cout<<s<<endl;
    cin>>x;
    // cin.ignore();
    getchar();
    getline(cin,s);
    cout<<x<<" "<<s<<endl; // when we use getline, if input anything before it we should use cin.ignore() or getchar();
    return 0;
}