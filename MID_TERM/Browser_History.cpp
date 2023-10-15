#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        string val;
        node * next;
        node * prev;

        node(string val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_head_tail(node *&tail,node *&head,string val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
int size(node *head)
{
    node*tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void normal_print(node *head)
{
    node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    string val;
    while (cin>>val)
    {
        if(val=="end")
        {
            break;
        }
        insert_at_head_tail(tail,head,val);
    }
    int n=size(head);
    string a[n];
    node* tmp=head;
    for (int i = 0; i < n; i++)
    {
        a[i]=tmp->val;
        tmp=tmp->next;
    }
    list<string> mylist(a,a+n);
    int q;
    cin>>q;
    while (q--)
    {
        string command;
        cin>>command;
        list<string>::iterator afterit=mylist.begin();
        if(command=="visit")
        {
            string address;
            cin>>address;
            list<string>:: iterator it= mylist.begin();
            while (it!=mylist.end())
            {
                if(*it==address)
                {
                    afterit=it;
                    cout<<address<<endl;
                    break;
                }
                it++;
            }
            if(it==mylist.end())
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(command=="next")
        {
            afterit++;
            if(afterit==mylist.end())
            {
                cout<<"Not Available"<<endl;
                afterit--;
            }
            else
            {
                cout<<*afterit<<endl;
            }
        }

        else if(command=="prev")
        {
            if(afterit==mylist.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else 
            {
                afterit--;
                cout<<*afterit<<endl;
            }
        }
    }
    // int q;
    // cin>>q;
    // for(int i=0;i<q;i++)
    // {
    //     string command;
    //     cin>>command;
    //     node*tmp=head;
    //     node*afterit=head;
    //     if(command=="visit")
    //     {
    //         string address;
    //         cin>>address;
    //         while (tmp!=NULL)
    //         {
    //             if(tmp->val==address)
    //             {
    //                 afterit=tmp;
    //                 cout<<address<<endl;
    //                 break;
    //             }
    //             tmp=tmp->next;
    //         }
    //         if(tmp==NULL)
    //         {
    //             cout<<"Not Available"<<endl;
    //         }
    //     }
    //     else if(command=="next")
    //     {
    //         afterit=afterit->next;
    //         if(afterit==NULL)
    //         {
    //             cout<<"Not Available"<<endl;
    //             afterit=afterit->prev;
    //         }
    //         else
    //         {
    //             cout<<afterit->val<<endl;
    //         }
    //     }
    //     else if(command=="prev")
    //     {
    //         if(afterit==head)
    //         {
    //             cout<<"Not Available"<<endl;
    //         }
    //         else
    //         {
    //             afterit=afterit->prev;
    //             cout<<afterit->val<<endl;
    //         }
    //     }
    // }  
    return 0;
}