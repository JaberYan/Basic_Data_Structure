#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* left;
        node* right;
        node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
        
};
void insert(node* &root,int val)
{
    node* newnode=new node(val);
    if(root==NULL)
    {
        root=newnode;
        return;
    }
    node* current=root;
    node* parent=NULL;
    while (current!=NULL)
    {
        if(current->val>val)
        {
            parent=current;
            current=current->left;
        }
        else
        {
            parent=current;
            current=current->right;
        }
    }
    if(parent->val>val)
    {
        parent->left=newnode;
    }
    else
    {
        parent->right=newnode;
    }
}
bool search_manual(node* root,int val)
{
    node* cur=root;
    
    while (cur!=NULL)
    {
        if(cur->val>val) 
        {
            cur=cur->left;
        }
        else if(cur->val<val)
        {
            cur=cur->right;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node* root=NULL;
    insert(root,5);
    insert(root,4);
    insert(root,6);
    insert(root,2);
    insert(root,7);
    if(search_manual(root,5)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}