#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age =20;
    int weight=50;
    class body
    {
        public:
        int height;
        string color;
        body(int height, string color)
        {
            this->height = height;
            this->color = color;
        }
    };
    int cal()
    {
        return age*weight;
    }
}
using namespace Rakib;
int main()
{
    cout<<age<<" "<<weight<<endl;
    cout<<cal()<<endl;
    return 0;
}