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
void maximum_vlaue(node *head)
{
    node *tmp=head;
    int max=INT_MIN;
    while (tmp!=NULL)
    {
        if(tmp->val>max)
        {
            max=tmp->val;
        }  
        tmp=tmp->next; 
    }
    cout<<max<<" ";
}
void minimum_value(node *head)
{
    node *tmp=head;
    int min=INT_MAX;
    while (tmp!=NULL)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }  
        tmp=tmp->next; 
    }
    cout<<min<<endl;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int val;
    while (true) //o(n);
    {
        cin>>val;
        if(val==-1) break;
        inserted_tail(head,tail,val); //o(1);
    }
    maximum_vlaue(head);
    minimum_value(head);
    return 0;
}