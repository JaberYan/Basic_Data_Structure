#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node * next;
        node * prev;

        node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
class myStack
{
    public:
        node *head=NULL;
        node *tail=NULL;
        int sz=0;

        void push(int val)
        {
            sz++;
            node *newanode=new node (val);
            if(head==NULL)
            {
                head=newanode;
                tail=newanode;
                return ;
            }
            tail->next=newanode;
            newanode->prev=tail;
            tail=newanode;
        }

        void pop()
        {
            sz--;
            node *deletenode=tail;
            tail=tail->prev;
            if(tail==NULL)
            {
                head =NULL;
            }
            else 
            {
                tail->next=NULL;
            }
            delete deletenode;
        }

        int top()
        {
            return tail->val;
        }

        int size()
        {
            return sz;
        }
        
        bool empty()
        {
            if(sz==0) return true;
            else return false;
        }
};
class myQueue
{
    public:
        node*head =NULL;
        node*tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            node *newnode=new node(val);
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        void pop()
        {
            sz--;
            node *deletenode= head;
            head=head->next;
            if(head==NULL)
            {
                tail=NULL;
            }
            else 
            {
                head->prev=NULL;
            }
            delete deletenode;
        }
        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0) return true;
            else return false;
        }
};
int main()
{
    myStack st;
    int n,m;
    cin>>n>>m;
    list<int> stacklist;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    } 
    while (st.empty()==false)
    {
        stacklist.push_back(st.top());
        st.pop();
    }
    // for(int s:stacklist)
    // {
    //     cout<<s<<" ";
    // }
    // cout<<endl;
    // while (st.empty()==false)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    myQueue q;
    list<int> queuelist;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        queuelist.push_back(q.front());
        q.pop();
    }
    
    // for(int Q:queuelist)
    // {
    //     cout<<Q<<" ";
    // }
    // while (q.empty()==false)
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    int flag=0;
    if(stacklist==queuelist) flag=1;
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}