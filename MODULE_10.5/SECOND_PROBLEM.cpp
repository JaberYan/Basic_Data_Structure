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
void reverse(node *tail)
{
    if(tail==NULL)
    {
        return;
    }
    cout<<tail->val<<" ";
    reverse(tail->prev);
}
void reverse2(node *head,node *tail)
{
   node* i=head;
   node* j=tail;
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
    node *head=NULL;
    node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inseret_at_linked_list(head,tail,val);
    }
    // reverse(tail);
    print_normal(head);
    reverse2(head,tail);
    print_normal(head);
    return 0;
}