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
void query_invalid_index(node *&head,int val,int pos)
{
    node *newnode=new node(val);
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"invalid"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
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
    // int cnt=0;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        // else 
        // {
        //     cnt++;
        // }
        insert_at_tail(head,val);
    }
    while (true)
    {
        int q;
        cout<<"input query:";
        cin>>q;
        cout<<endl;
        for (int i = 0; i < q; i++)
        {
            int pos,val;
            cin>>pos>>val;
            query_invalid_index(head,val,pos);
            print_linked_list(head);
            cout<<endl<<endl;
        }
    }
    return 0;
}