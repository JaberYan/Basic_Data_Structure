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
void reverse(node *head)
{
    node *tmp=head;
    if(tmp==NULL) return;
    reverse(tmp->next);
    cout<<tmp->val<<" ";
}
void print_all_list(node *head)
{
    node * tmp=head;
    while (tmp != NULL)
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
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        inserted_tail(head,tail,val);
    }
    reverse(head);
    cout<<endl;
    print_all_list(head);
    return 0;
}