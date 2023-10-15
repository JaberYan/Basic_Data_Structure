#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node * next;

        node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
int main()
{
    node a(10);
    node b(30);
    node c(40);
    a.next=&b;
    b.next=&c;

    // cout<<a.val<<endl;
    // cout<<b.val<<endl;
    // cout<<c.val<<endl;
    // cout<<a.next<<endl;
    // cout<<b.next<<endl;
    // cout<<c.next<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
    cout<<(*b.next).val<<endl;
    cout<<b.next->val<<endl;
    return 0;
}