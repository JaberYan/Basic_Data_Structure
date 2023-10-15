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
void print_level_order(node* root)
{
    queue<node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        node* parent=q.front();
        q.pop();

        cout<<parent->val<<" ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}
bool search(node* root,int val)
{
    if(root==NULL) return false;
    if(root->val==val) return true;
    if(root->val>val) return search(root->left,val);
    else return search(root->right,val);
}
int main()
{
    node* root=NULL;
    insert(root,5);
    insert(root,4);
    insert(root,6);
    insert(root,2);
    insert(root,7);
    print_level_order(root);
    cout<<endl;
    if(search(root,70)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}