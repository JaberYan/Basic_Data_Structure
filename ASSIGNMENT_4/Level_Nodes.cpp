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
int height;
void level_nodes(node* root,int x)
{
    queue<pair<node*,int>> q;
    if(root) q.push({root,0});
    while (!q.empty())
    {
        pair<node*,int> p=q.front();
        node* mynode=p.first;
        int level=p.second;
        q.pop();

        if(level==x)
        {
            // cout<<mynode->val<<" ";
            cout<<mynode->val<<" ";
            // break;
        }
        // if(x>level) cout<<"Invalid"; break;
        if(mynode->left) q.push({mynode->left,level+1});
        if(mynode->right) q.push({mynode->right,level+1});
    }
}
int count_height(node* root)
{
    if(root==NULL) return 0;
    int l=count_height(root->left);
    int r=count_height(root->right);
    int mx=max(l,r);
    return max(l,r)+1;
}
int main()
{
    node* root=input_tree();
    int x;
    cin>>x;
    if(x>count_height(root)-1) cout<<"Invalid";
    else level_nodes(root,x);
    height=count_height(root);
    // cout<<"Invalid";
    // print_tree(root);
    // cout<<endl;
    // cout<<x;
    return 0;
}