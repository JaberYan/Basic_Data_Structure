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
int size(node *head)
{
    int cnt=0;
    node *tmp=head;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
} 
int main()
{
    node *head=NULL;
    node *head2=NULL;
    node *tail=NULL;
    node *tail2=NULL;
    int val;
    int val2;
    while (true)//o(n);
    {
        cin>>val;
        if(val==-1) break;
        inserted_tail(head,tail,val);//o(1);
    }
    while (true)
    {
        cin>>val2;
        if(val2==-1) break;
        inserted_tail(head2,tail2,val2);
    }
    vector<int>a;
    node* tmp=head;
    for(int i=0;i<size(head);i++)
    {
        a.push_back(tmp->val);
        tmp=tmp->next;
    }
    vector<int>a2;
    node* tmp1=head2;
    for(int i=0;i<size(head2);i++)
    {
        a2.push_back(tmp1->val);
        tmp1=tmp1->next;
    }
    int flag=1;
    for (int i = 0; i < size(head); i++)
    {
        if(a[i]!=a2[i])
        {
            flag=0;
        }
    }
    if(size(head)!=size(head2)) cout<<"NO"<<endl;
    else if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}