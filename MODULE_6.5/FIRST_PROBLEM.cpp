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
    node * newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node * tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //ete kitu akn NULL e ace;
    tmp->next=newnode;
}
void print_linked_list(node * head)
{
    node * tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{
    node *head=NULL;
    int cnt=0;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        else 
        {
            cnt++;
        }
        insert_at_tail(head,val);
    }
    cout<<cnt<<endl;
    print_linked_list(head);
    return 0;
}