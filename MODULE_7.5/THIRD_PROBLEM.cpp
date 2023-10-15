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
void middle_digit_print(node *head,int cnt)
{
    node *tmp=head;
    if(cnt%2!=0)
    {
        int a=(cnt+1)/2;
        for (int i = 0; i < a-1; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }
    else 
    {
        int a=(cnt)/2;
        for (int i = 0; i < a-1; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
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
    middle_digit_print(head,cnt);
    return 0;
}