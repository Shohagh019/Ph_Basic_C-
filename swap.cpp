#include<bits/stdc++.h>
using namespace std;
void my_swap(int a, int b)
{
    int tmp=a;
    a=b;
    b=tmp;
    cout<<a<<" "<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // int tmp=a;
    // a=b;
    // b=tmp;
    // cout<<a<<" "<<b;
    // my_swap(a,b);
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}