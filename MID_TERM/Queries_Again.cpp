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
void inserted_at_head(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void inserted_at_tail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void inserted_at_any_position(node *head,int val,int pos)
{
    node *newnode=new node(val);
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
}
void reverse(node *head,node *tail)
{
    node *i=head;
    node *j=tail;
    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
}
void reverse2(node *tail)
{
    node *tmp=tail;
    while (tmp!=NULL)
    {
        cout<<" "<<tmp->val;
        tmp=tmp->prev;
    }
    cout<<endl;
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
void print_normal(node *head)
{
    node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<" "<<tmp->val;
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int q;
    cin>>q;
        for (int i = 1; i <= q; i++)
        {
                int pos,val;
                cin>>pos>>val;
                if(pos>size(head))
                {
                    cout<<"Invalid"<<endl;
                }
                else if(pos==0)
                {
                    inserted_at_head(head,tail,val);
                    cout<<"L ->"; print_normal(head);
                    cout<<"R ->"; reverse2(tail);
                }
                else if(pos==size(head)) 
                {
                    inserted_at_tail(head,tail,val);
                    cout<<"L ->"; print_normal(head);
                    cout<<"R ->"; reverse2(tail);
                }
                else 
                {
                    inserted_at_any_position(head,val,pos);
                    cout<<"L ->"; print_normal(head);
                    cout<<"R ->"; reverse2(tail);
                }
        }
    return 0;
}