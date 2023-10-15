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
void insert_at_any_position(node *head,int pos,int val) //o(n);
{
    node *newnode=new node(val);
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    // cout<<tmp->val<<endl;
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<"inserted at position:"<<pos<<endl;
}
void inserted_at_tail(node * &head,node *&tail,int val)
{
    node *newnode =new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        cout<<"inserted at head and tail"<<endl;
        return;
    }
    tail->next=newnode;
    cout<<"inserted at tail"<<endl;
}
void insrted_at_head(node *&head,int val)//o(1);
{
    node *newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void delete_node(node *head,int pos)
{
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
int size(node * head)
{
    node *tmp=head;
    int count=0;
    while (tmp!=NULL)//o(n);
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void print_all_list(node *head)
{
    node * tmp=head;
    while (tmp != NULL)//o(n);
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    // node *head=NULL;
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *d=new node(50);
    node *tail=d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print_all_list(head);
    cout<<"tail>>"<<tail->val<<endl;
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        insrted_at_head(head,val);
    }
    else if(pos==size(head))
    {
        inserted_at_tail(head,tail,val);
    }
    else
    {
        insert_at_any_position(head,pos,val);
    }
    // insert_at_tail(head,500);
    // insrted_at_head(head,val);
    print_all_list(head);
    // cout<<"tail>>"<<tail->val<<endl;
    return 0;
}