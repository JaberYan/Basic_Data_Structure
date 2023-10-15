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
vector<int> pre1;
vector<int> pre2;
vector<int> post1;
vector<int> post2;
vector<int> in1;
vector<int> in2;
vector<int> lev1;
vector<int> lev2;
void find_pre_order(node* root,int x)
{
    if(x==1)
    {
        if(root==NULL) return;
        pre1.push_back(root->val);
        find_pre_order(root->left,1);
        find_pre_order(root->right,1);
    }
    else
    {
        if(root==NULL) return;
        pre2.push_back(root->val);
        find_pre_order(root->left,2);
        find_pre_order(root->right,2);
    }
}
void find_post_order(node* root,int x)
{
    if(x==1)
    {
        if(root==NULL) return;
        find_post_order(root->left,1);
        find_post_order(root->right,1);
        post1.push_back(root->val);
    }
    else
    {
        if(root==NULL) return;
        find_post_order(root->left,2);
        find_post_order(root->right,2);
        post2.push_back(root->val);
    }
}
void find_in_order(node* root,int x)
{
    if(x==1)
    {
        if(root==NULL) return;
        find_in_order(root->left,1);
        in1.push_back(root->val);
        find_in_order(root->right,1);
    }
    else
    {
        if(root==NULL) return;
        find_in_order(root->left,2);
        in2.push_back(root->val);
        find_in_order(root->right,2);
    }
}
void find_level_order(node* root,int x)
{
    if(x==1)
    {
        queue<node*> q;
        if(root!=NULL) q.push(root);
        while (!q.empty())
        {
            node* p=q.front();
            q.pop();

            lev1.push_back(p->val);

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
        
    }
    else
    {
        queue<node*> q;
        if(root!=NULL) q.push(root);
        while (!q.empty())
        {
            node* p=q.front();
            q.pop();

            lev2.push_back(p->val);

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
    }
}
int main()
{
    node* root1=input_tree();
    node* root2=input_tree();
    find_pre_order(root1,1);
    find_pre_order(root2,2);

    // find_post_order(root1,1);
    // find_post_order(root2,2);

    // find_in_order(root1,1);
    // find_in_order(root2,2);

    // find_level_order(root1,1);
    // find_level_order(root2,2);

    if(pre1==pre2 && post1==post2 && in1==in2 && lev1==lev2) cout<<"true";
    else cout<<"false";
    // print_tree(root1);
    // cout<<endl;
    // print_tree(root2);
    return 0;
}