#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int* a = new int [5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    return a;

}
int main()
{
//    int *a = new int [5];
//    for(int i=0; i<5; i++)
//    {
//         cin>>a[i];
//    }
//    for(int i=0; i<5; i++)
//    {
//     cout<<a[i]<<" ";
//    }
    int * p= fun();
    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<" "; 
    }
    cout<<endl;
    delete [] p;// delete p; is for single value.
    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<" ";
    }
    
    return 0;
}