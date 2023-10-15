#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40,50};
    // cout<<mylist.front()<<endl;
    // cout<<mylist.back();

    auto it = next(mylist.begin(),4);
    cout<<*it<<endl;
    cout<<*next(mylist.begin(),3);
    return 0;
}