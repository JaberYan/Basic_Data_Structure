#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40,50};
    // cout<<mylist.size()<<endl;

    // cout<<mylist.max_size()<<endl;

    // mylist.clear();

    mylist.resize(2);
    mylist.resize(4,100);
    mylist.resize(7,200);
    cout<<mylist.size()<<endl;
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}