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
void reverse(node* &head,node *current)
{
    if(current->next==NULL)
    {
        head=current;
        return;
    }
    reverse(head,current->next);
    current->next->next=current;
    current->next=NULL;
}
int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);

    head->next=a;
    a->next=b;

    reverse(head,head);
    // cout<<endl;
    print(head);
    
    return 0;
}