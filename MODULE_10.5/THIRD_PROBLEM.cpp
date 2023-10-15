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
void palindrome(node *head,node *tail)
{
    node *i=head;
    node *j=tail;
    int flag=0;
    while (i!=j && i->next!=j)
    {
        if(i->val==j->val)
        {
            flag=1;
            i=i->next;
            j=j->prev;
        }
    }
    if(i->val==j->val)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    if(flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
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
    node *head=NULL;
    node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inseret_at_linked_list(head,tail,val);
    }
    print_normal(head);
    palindrome(head,tail);
    return 0;
}