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
    //eta kitu akn NULL e ace;
    tmp->next=newnode;
}
void middle_value_print(node *head,int cnt)
{
    node *tmp=head;
    if(cnt%2!=0)
    {
        int a=(cnt+1)/2;
        for (int i = 1; i <= a-1; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }
    else
    {
        int a=cnt/2;
        for (int i = 1; i <= a-1; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
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
    middle_value_print(head,cnt);
    return 0;
}