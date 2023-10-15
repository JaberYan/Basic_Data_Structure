// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//         int val;
//         node * next;
//         node * prev;

//         node(int val)
//         {
//             this->val=val;
//             this->next=NULL;
//             this->prev=NULL;
//         }
// };
// void inserted_at_head_tail(node *&tail,node *&head,int val)
// {
//     node *newnode=new node(val);
//     if(tail==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     newnode->prev=tail;
//     tail=newnode;
// }
// void print_reverse(node *tail)
// {
//     node *tmp2=tail;
//     while (tmp2!=NULL)
//     {
//         cout<<tmp2->val<<" ";
//         tmp2=tmp2->prev;
//     }
// }
// void print_normal(node *head)
// {
//     node *tmp=head;
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
//     node *tail=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if(val==-1) break;
//         inserted_at_head_tail(tail,head,val);
//     }
//     print_normal(head);
//     cout<<endl;
//     print_reverse(tail);
//     return 0;
// }
#include <iostream>
#include <list>
#include <string>
using namespace std;

// Function to perform the queries on the doubly linked list
void processQueries(list<string>& addresses) 
{
    list<string>::iterator current = addresses.begin();

    int Q;
    cin >> Q;

    // Process each query
    while (Q--) {
        string command;
        cin >> command;

        if (command == "visit") 
        {
            string address;
            cin >> address;

            // Search for the address in the list
            list<string>::iterator it = addresses.begin();
            while (it != addresses.end()) 
            {
                if (*it == address) {
                    current = it;
                    cout << address << endl;
                    break;
                }
                ++it;
            }

            // If address not found
            if (it == addresses.end())
            {
                cout << "Not Available" << endl;
            }
        } 
        else if (command == "next") 
        {
            current++;
            if (current == addresses.end()) 
            {
                cout << "Not Available" << endl;
                current--; // Move back to the last valid address
            } 
            else 
            {
                cout << *current << endl;
            }
        } 
        else if (command == "prev") 
        {
            if (current == addresses.begin()) 
            {
                cout << "Not Available" << endl;
            } 
            else 
            {
                current--;
                cout << *current << endl;
            }
        }
    }
}

int main() {
    list<string> addresses;
    string address;

    // Input the doubly linked list
    while (cin >> address) {
        if (address == "end")
            break;
        addresses.push_back(address);
    }

    processQueries(addresses);

    return 0;
}
