#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    // if(x=='a') cout<<"vowel"<<endl;
    // if(x=='e') cout<<"vowel"<<endl;
    // if(x=='i') cout<<"vowel"<<endl;
    // if(x=='o') cout<<"vowel"<<endl;
    // if(x=='u') cout<<"vowel"<<endl;
    // else cout<<"consonant"<<endl;
    switch (x)
    {
    case 'a':
        cout << "vowel";
        break;

    case 'e':
        cout << "vowel";
        break;
    case 'i':
        cout << "vowel";
        break;
    case 'o':
        cout << "vowel";
        break;
    case 'u':
        cout << "vowel";
        break;
    default:
        cout << "consonant";
    }
    return 0;
}