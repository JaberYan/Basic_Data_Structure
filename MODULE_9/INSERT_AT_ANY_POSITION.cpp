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
void inserted_at_any_position(node *head,int val,int pos)
{
    node *newnode=new node(val);
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next; //21->30
    // newnode->next->prev=newnode; //30->21
    tmp->next->prev=newnode; //30->21
    tmp->next=newnode; //20->21
    newnode->prev=tmp; //21->20
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
    cout<<endl;
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
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c =new node(40);
    node *tail=c;


    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    int pos,val;
    cin>>pos>>val;
    if(pos >= size(head))
    {
        cout<<"invalid index";
        cout<<endl;
    }
    else 
    {
        inserted_at_any_position(head,val,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}