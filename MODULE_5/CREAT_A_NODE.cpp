#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node * next;
};
int main()
{
    node a,b,c;
    a.val=10;
    b.val=39;
    c.val=56;


    a.next=&b;
    b.next=&c;
    c.next=NULL;


    // cout<<a.val<<endl;
    // cout<<b.val<<endl;
    // cout<<c.val<<endl;
    // cout<<a.next<<endl;
    // cout<<b.next<<endl;
    // cout<<c.next<<endl;
    cout<<(*a.next).val<<endl;
    cout<<(*b.next).val<<endl;
    cout<<a.next->val<<endl;
    return 0;
}