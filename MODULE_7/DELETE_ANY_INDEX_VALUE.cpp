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
void delete_any_index_value(node *head,int pos)//o(n);
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
void delete_from_head(node *&head)
{
    node *deleteheadnode=head;
    head=head->next;
    delete deleteheadnode;
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
    int pos;
    cout<<"enter the position:";
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"invlaid index"<<endl;
    }
    else if(pos==0)
    {
        delete_from_head(head);
    }
    else 
    {
        delete_any_index_value(head,pos);
    }
    print_all_list(head);
    return 0;
}