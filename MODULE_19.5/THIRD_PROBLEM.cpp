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
vector<int> root11;
vector<int> root22;
int find_leaf_node1(node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) root11.push_back(root->val);
    int l=find_leaf_node1(root->left);
    int r=find_leaf_node1(root->right);
    return l+r;
}
int find_leaf_node2(node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) 
    root11.push_back(root->val);
    int l=find_leaf_node2(root->left);
    int r=find_leaf_node2(root->right);
    return l+r;
}
int find_leaf_node2(node* root,int x)
{
    if(x==1)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) root22.push_back(root->val);
        int l=find_leaf_node2(root->left,1);
        int r=find_leaf_node2(root->right,1);
        return l+r;
    }
    else
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) root11.push_back(root->val);
        int l=find_leaf_node2(root->left,2);
        int r=find_leaf_node2(root->right,2);
        return l+r;
    }
}
int main()
{
    node* root1=input_tree();
    node* root2=input_tree();
    // find_leaf_node2(root1,1);
    // find_leaf_node2(root2,2);
    find_leaf_node1(root1);
    find_leaf_node2(root2);
    if(root11!=root22) cout<<"false"<<endl;
    else cout<<"true"<<endl;
    // print_tree(root1);
    // cout<<endl;
    // print_tree(root2);
    return 0;
}