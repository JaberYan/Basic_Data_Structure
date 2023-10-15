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
void reverse(node* &head,node* cur)
    {
        if(cur->next==NULL)
        {
            head=cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next=cur;
        cur->next=NULL;
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
    node* newhead=NULL;
    node* newtail=NULL;
    node* tmp=head;
    while(tmp!=NULL)
    {
        inserted_tail(newhead,newtail,tmp->val);
        tmp=tmp->next;
    }
    reverse(newhead,newhead);
    tmp=head;
    node* tmp2=newhead;
    int flag=0;
    while(tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            flag=1;
            break;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    if(flag==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}