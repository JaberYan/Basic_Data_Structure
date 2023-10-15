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
    node *newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<"inserted at head"<<endl<<endl;
        return;
    }
    node *tmp = head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<"inseted at tail"<<endl<<endl;
}
void print_linked_list(node *head)
{
    cout<<"your linked list:";
    node * tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(node * &head,int pos,int v)
{
    node *newnode=new node(v);
    node * tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<"inserted at position "<<pos<<endl;
}
void insert_at_head(node *&head,int v)
{
    node * newnode=new node(v);
    newnode->next=head;
    head=newnode;
    cout<<endl<<"inserted at head"<<endl<<endl;
}
int main()
{
    node *head=NULL;
    while (true)
    {
        cout<<"option 1:insert at tail"<<endl;
        cout<<"option 2:print linked list"<<endl;
        cout<<"option 3:insert any position"<<endl;
        cout<<"option 4:insert at head"<<endl;
        cout<<"option 5:terminate"<<endl;
        int op;
        cout<<endl;
        cout<<"enter the option:";
        cin>>op;
        if(op==1)
        {
            cout<<"enter the value:";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"enter position:";
            cin>>pos;
            cout<<"enter value:";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_position(head,pos,val);
            }
        }
        if(op==4)
        {
            int v;
            cout<<"enter the value:";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            break;
        }
    }
    
    return 0;
}