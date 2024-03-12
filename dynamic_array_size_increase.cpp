#include<bits/stdc++.h>
using namespace std;

int main()
{
    int * a= new int [5];
    int * b=new int [5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    delete[] a;
    int * c= new int [7];
    for(int i=0; i<5; i++)
    {
        c[i]=b[i];
    }
    delete[] b;
    c[5]=100, c[6]=200;
    for(int i=0; i<7; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}