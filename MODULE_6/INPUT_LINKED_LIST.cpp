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
void insert_at_tail(node * &head,int v)
{
    node *newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //tmp ta akn sese ace;
    tmp->next=newnode;
}
void print_linked_list(node *head)
{
    cout<<endl;
    cout<<"your linked list:";
    node * tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    node *head=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}