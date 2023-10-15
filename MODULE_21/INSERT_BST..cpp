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
node* input_tree()
{
    int val;
    cin>>val;
    queue<node*> q;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    if(root) q.push(root);
    while (!q.empty())
    {
        node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        node* myleft;
        if(l==-1) myleft=NULL;
        else myleft=new node(l);

        node* myright;
        if(r==-1) myright=NULL;
        else myright=new node(r);

        parent->left=myleft;
        parent->right=myright;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
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
void insert_node(node* &root,int x)
{
    if(root==NULL)
    {
        root=new node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left==NULL)
        {
            root->left=new node(x);
        }
        else
        {
            insert_node(root->left,x);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=new node(x);
        }
        else
        {
            insert_node(root->right,x);
        }
    }
}
int main()
{
    node* root=input_tree();
    // print_level_order(root);
    int x;
    cin>>x;
    insert_node(root,x);
    print_level_order(root);
    return 0;
}