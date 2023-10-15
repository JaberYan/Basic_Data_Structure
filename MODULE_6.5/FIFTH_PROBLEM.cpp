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
    //eta akn NULL e ace;
    tmp->next=newnode;
}
void coutnting_linked_list(node *head,int cnt)
{
    node *tmp=head;
    int a[cnt];
    for (int i = 0; i < cnt; i++)
    {
        a[i]=tmp->val;
        tmp=tmp->next;
    }
    int flag=0;
    for (int i = 0; i < cnt; i++)
    {
        for (int j = i+1; j < cnt; j++)
        {
            if(a[i]>a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
    // cout<<cnt<<endl;
    coutnting_linked_list(head,cnt);
    return 0;
}