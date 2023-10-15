#include<bits/stdc++.h>
using namespace std;

template <typename T>
class adder
{
    public:
        T add(T a , T b)
        {
            return a+b;
        }
};

int main()
{
    adder<string> ami;
    string sum=ami.add("ami"," jaber");
    cout<<sum<<endl;
    return 0;
}