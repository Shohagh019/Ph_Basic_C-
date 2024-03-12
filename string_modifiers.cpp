#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string a;
    // string b;
    // cin>>a>>b;
    // a+=b;// add two string
    // cout<<a<<endl;
    // b.append(a); // another way to add two string 
    // cout<<b<<endl;
    // a.push_back('A'); // add a char in the last of the string
    // cout<<a<<endl;
    // a.pop_back(); // remove last char of the string
    // cout<<a<<endl;
    string a = "Bangladesh";
    a.erase(5); // it keeps untill index five and delete others all like resize()
    cout<<a<<endl;
    string b= "Pakistan";
    b.erase(5,2); // first paramater define starting index, second how many char to be deleted or length
    cout<<b<<endl;
    string c ="India";
    c.replace(2,2,"Bal");// first erase the targetted segment and insert the given
    cout<<c<<endl;
    string d="America";
    d.insert(4,"USA"); // first parameter is from which index to insert and second is what to insert
    cout<<d<<endl;
    return 0;
}