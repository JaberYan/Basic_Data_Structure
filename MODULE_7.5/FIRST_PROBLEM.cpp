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
void comparision(int cnt1,int cnt2)
{
    if(cnt1==cnt2)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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
    node *head2=NULL;
    node *tail=NULL;
    node *tail2=NULL;
    int val;
    int val2;
    int cnt=0;
    int cnt2=0;
    while (true)//o(n);
    {
        cin>>val;
        if(val==-1) break;
        else cnt++;
        inserted_tail(head,tail,val);//o(1);
    }
    while (true)
    {
        cin>>val2;
        if(val2==-1) break;
        else cnt2++;
        inserted_tail(head2,tail2,val2);
    }
    comparision(cnt,cnt2); return 0;
}