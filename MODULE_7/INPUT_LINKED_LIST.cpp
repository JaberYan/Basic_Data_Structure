// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//         int val;
//         node * next;

//         node(int val)
//         {
//             this->val=val;
//             this->next=NULL;
//         }
// };
// void inserted_tail(node *&head,node *&tail,int val)
// {
//     node *newnode=new node(val);
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     tail=newnode;
// }
// void print_all_list(node *head)
// {
//     node * tmp=head;
//     while (tmp != NULL)//o(n);
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     node *head=NULL;
//     node *tail=NULL;
//     int val;
//     while (true)
//     {
//        cin>>val;
//        if(val==-1) break;
//        inserted_tail(head,tail,val); 
//     }
//     print_all_list(head);
//     return 0;
// }
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
void size(node *head)
{
    node * tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    cout<<"linked list size is:"<<cnt<<endl;
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
    node *tail=NULL;
    int val;
    while (true)//o(n);
    {
        cin>>val;
        if(val==-1) break;
        inserted_tail(head,tail,val);//o(1);
    }
    size(head);
    print_all_list(head);
    return 0;
}