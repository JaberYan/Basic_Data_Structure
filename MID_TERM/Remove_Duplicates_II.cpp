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
int size(node *head)
{
    node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
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
    int n=size(head);
    int a[n];
    node* tmp=head;
    for (int i = 0; i < n; i++)
    {
        a[i]=tmp->val;
        tmp=tmp->next;
    }
    list<int> mylist(a,a+n);
    mylist.sort();
    mylist.unique();
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}