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
void inserted_head(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
    
}
void inserted_at_tail(node * &head,node *&tail,int val)
{
    node *newnode =new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_head_tail(node *&head,node *tail)
{
    node *tmp=head;
    node *tm=tail;
    cout<<head->val<<" "<<tail->val<<endl;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int q;
    cin>>q;
    for (int i = 1; i <= q; i++)
    {
        int op,val;
        cin>>op>>val;
        if(op==0)
        {
            inserted_head(head,tail,val);
            print_head_tail(head,tail);
        }
        else if(op==1)
        {
            inserted_at_tail(head,tail,val);
            print_head_tail(head,tail);
        }
    }
    return 0;
}