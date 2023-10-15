#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist;

    // list<int> list2={1,2,3,4,5};
    // list<int> mylist(list2);
    // list<int> mylist(10,5);

    // int a[5]={10,20,30,40,50};
    // list<int> mylist(a,a+5);

    vector<int> vect={100,200,300,400,500};
    list<int> mylist(vect.begin(),vect.end());
    // for(auto it=mylist.begin();it!=mylist.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}