#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node * next;
        node * prev;
        
        node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void print_normal(node *head)
{
    node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void print_reverse(node *tail)
{
    node *tmp2=tail;
    while (tmp2!=NULL)
    {
        cout<<tmp2->val<<" ";
        tmp2=tmp2->prev;
    }
}
int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *tail=b;


    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;


    print_normal(head);
    cout<<endl<<endl;
    print_reverse(tail);
    return 0;
}