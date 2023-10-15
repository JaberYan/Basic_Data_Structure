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
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*> q;
    if(root!=NULL) q.push(root);
    while (!q.empty())
    {
        //1. ber kore ana queue theke
        node* p=q.front();
        q.pop();

        //2.jabotiyo kaj
        int l,r;
        cin>>l>>r;
        node*myleft;
        if(l==-1) myleft=NULL;
        else myleft=new node(l);
        
        node* myright;
        if(r==-1) myright=NULL;
        else myright=new node(r);

        p->left=myleft;
        p->right=myright;

        //3.children gulo k rakha 
        if(p->left!=NULL)
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }
    }
    return root;
    
}
void print_tree(node*root)
{
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* p=q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left!=NULL)
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }
    }
    
}
vector<int> v;
void right_left(node* root)
{
    queue<node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        node* p=q.front();
        q.pop();

        v.push_back(p->val);

        if(p->right!=NULL)
        {
            q.push(p->right);
        }
        if(p->left!=NULL)
        {
            q.push(p->left);
        }
    }
}
int main()
{
    node* root=input_tree();
    right_left(root);
    reverse(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    // print_tree(root);
    return 0;
}