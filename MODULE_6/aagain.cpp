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
// void insert_at_tail(node * &head,int v)
// {
//     node *newnode=new node(v);
//     if(head==NULL)
//     {
//         head=newnode;
//         cout<<"inserted at head"<<endl<<endl;
//         return;
//     }
//     node *tmp = head;
//     while (tmp->next!=NULL)
//     {
//         tmp=tmp->next;
//     }
//     tmp->next=newnode;
//     cout<<"inseted at tail"<<endl<<endl;
// }
// void print_linked_list(node *head)
// {
//     cout<<"your linked list:";
//     node * tmp = head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     node *head=NULL;
//     while (true)
//     {
//         cout<<"option 1:insert at tail"<<endl;
//         cout<<"option 2:print linked list"<<endl;
//         cout<<"option 3:terminate"<<endl;
//         int op;
//         cout<<"enter the option:";
//         cin>>op;
//         if(op==1)
//         {
//             cout<<"enter the value:";
//             int v;
//             cin>>v;
//             insert_at_tail(head,v);
//         }
//         else if(op==2)
//         {
//             print_linked_list(head);
//         }
//         else if(op==3)
//         {
//             break;
//         }
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    p = NULL;
}
int main() {
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}