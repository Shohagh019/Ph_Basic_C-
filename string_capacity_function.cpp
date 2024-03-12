#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s.capacity()<<endl;
    /*capacity is the maximum number of characters that 
    the string can currently hold without having to grow. 
    size is how many characters actually exist in the string.*/
    s.clear(); // clear the whole string
    s.empty()? cout<<"empty"<<endl: cout<<"not empty"<<endl; // check empty or not
    string k = "i_love_you";
    cout<<k.size()<<endl;
    k.resize(8); //keep size 8 and delete others
    cout<<k<<endl;
    k.resize(10); // keep size and gives others 2 as NUL
    cout<<k<<endl;
    k.resize(14,'x'); //keep previous size and add extra char in the extended size
    cout<<k<<endl;

    return 0;
}