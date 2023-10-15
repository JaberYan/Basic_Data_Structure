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
void inserted_at_head_tail(node *&tail,node *&head,int val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse(node *head,node *tail)
{
    node *i=head;
    node *j=tail;
    while (i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
}
void print_normal(node *head)
{
    node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    // node *head=new node(10);
    // node *a=new node(20);
    // node *b=new node(30);

    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    node *head=NULL;
    node * tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inserted_at_head_tail(tail,head,val);
    }
    print_normal(head);
    cout<<endl;
    reverse(head,tail);
    print_normal(head);
    return 0;
}