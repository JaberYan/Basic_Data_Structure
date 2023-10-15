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
bool search(node* root,int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val)
    {
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
    node* root=input_tree();
    // print_level_order(root);
    int x;
    cin>>x;
    bool final_=search(root,x);
    if(final_!=true) cout<<"false";
    else cout<<"true";
    return 0;
}