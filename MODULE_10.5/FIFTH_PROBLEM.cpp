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
void inseret_at_linked_list(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head =newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
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
    node *head=NULL;
    node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inseret_at_linked_list(head,tail,val);
    }
    for (node* i = head; i->next!=NULL; i=i->next)
    {
        // cout<<i->val<<" "<<endl;
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        // cout<<endl;
    }
    print_normal(head);
    return 0;
}