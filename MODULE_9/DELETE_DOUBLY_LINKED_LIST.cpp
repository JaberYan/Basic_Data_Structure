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
void delete_at_any_position(node *head,int pos)
{
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
}
void delete_at_head(node *&head,node *& tail)
{
    node *deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_at_tail(node *&head,node *&tail)
{
    node *deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
int size(node *head)
{
    node *tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
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
    // node *head=NULL;
    // node *tail=NULL;
    node *head=new node(10);
    // node *a=new node(20);
    // node *b=new node(30);
    // node *c =new node(40);
    node *tail=head;


    // head->next=a;
    // a->prev=head;
    // a->next=b;
    // b->prev=a;
    // b->next=c;
    // c->prev=b;


    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"invalid"<<endl;
    }
    else if(pos==0)
    {
        delete_at_head(head,tail);
    }
    else if(pos==size(head)-1)
    {
        delete_at_tail(head,tail);
    }
    else 
    {
        delete_at_any_position(head,pos);
    }
    return 0;
}