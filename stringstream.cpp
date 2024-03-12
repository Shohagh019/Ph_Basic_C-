#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int total_word=0;
    int bd=0;
    while(ss>> word)
    {
        cout<<word<<endl;
        total_word++;
        if(word=="Bangladesh")
        {
            bd++;
        }
    }
    cout<<total_word<<" "<<bd<<endl;
    return 0;
}