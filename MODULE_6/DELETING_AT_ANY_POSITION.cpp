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
    cout<<endl;
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
        if(tmp==NULL)
        {
            cout<<endl<<endl<<"invalid index"<<endl<<endl;
            return;
        }
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
void delete_from_position(node *head,int pos)
{
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<endl<<"invalid deleting index"<<endl<<endl;
            return;
        }
    }
    if(tmp==NULL)
    {
        cout<<endl<<endl<<"invalid deleting index"<<endl<<endl;
        return;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout<<endl<<endl<<"deleted from position"<<endl<<endl;
}
void delete_from_head(node *&head)
{
    if(head==NULL)
    {
        cout<<endl<<endl<<"head is not available"<<endl<<endl;
        return;
    }
    node * deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<endl<<endl<<"deleted from head"<<endl<<endl;
}
int main()
{
    node *head=NULL;
    while (true)
    {
        cout<<"option 1:insert at tail"<<endl; //done
        cout<<"option 2:print linked list"<<endl; //done
        cout<<"option 3:insert any position"<<endl; //done
        cout<<"option 4:insert at head"<<endl; //done
        cout<<"option 5:delete from position"<<endl; //done
        cout<<"option 6:delete from head"<<endl; //done
        cout<<"option 7:terminate"<<endl;
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
            int pos;
            cout<<"enter the position:";
            cin>>pos;
            if(pos==0)
            {
                delete_from_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
        }
        else if(op==6)
        {
            delete_from_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    return 0;
}