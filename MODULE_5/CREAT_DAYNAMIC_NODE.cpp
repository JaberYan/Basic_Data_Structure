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
    node * head = new node(50);
    node * a=new node(90);
    node * b =new node(70);
    head->next= a;
    a->next=b;

    cout<<head->val<<endl;
    // cout<<head->next->next->val<<endl;
    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next<<endl;
    // cout<<a->val<<endl;
    // cout<<a->next<<endl;
    // cout<<head->next->next<<endl;
    return 0;
}