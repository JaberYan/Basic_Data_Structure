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
void inserted_tail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void sorting_of_linked(node *head,int cnt)
{
    int a[cnt];
    node *tmp=head;
    for (int i = 0; i < cnt; i++)
    {
        a[i]=tmp->val;
        tmp=tmp->next;
    }
    // for (int i = 0; i < cnt; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    for (int i = 0; i < cnt-1; i++)
    {
        for(int j=i+1;j<cnt;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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
    node *head=NULL;
    node *tail=NULL;
    int val;
    int cnt=0;
    while (true)//o(n);
    {
        cin>>val;
        if(val==-1) break;
        else cnt++;
        inserted_tail(head,tail,val);//o(1);
    }
    // sorting_of_linked(head,cnt);
    for (node* i = head; i->next!=NULL; i=i->next)
    {
        // cout<<i->val<<" "<<endl;
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        // cout<<endl;
    }
    print_all_list(head);
    // cout<<cnt<<endl;
    return 0;
}