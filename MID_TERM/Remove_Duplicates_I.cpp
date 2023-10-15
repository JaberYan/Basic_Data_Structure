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
void duplicate_remove(node *head)
{
    if(head==NULL) return;
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            tmp->next=tmp->next->next;
        }
        if(tmp->next==NULL) break;
        else if(tmp->val != tmp->next->val)
        {
            tmp=tmp->next;
        }
    }
}
void sorting(node*&head)
{
    for (node* i = head; i->next!=NULL; i=i->next)
    {
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void print(node *head)
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
    node* head=NULL;
    node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inserted_tail(head,tail,val);
    }
    sorting(head);
    duplicate_remove(head);
    print(head);
    return 0;
}