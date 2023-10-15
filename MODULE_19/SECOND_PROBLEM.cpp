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
void find_level(node *root,int find)
{
    queue<pair<node*,int>> q;
    q.push(make_pair(root,1));
    //q.push({root,1}); //ebhabe o kora pair make kora jay
    while (!q.empty())
    {
        pair<node*,int> p=q.front();
        node* node=p.first;
        int level=p.second;
        q.pop();

        // if(p.first->val==find) cout<<p.second<<endl;
        if(node->val==find) cout<<level<<endl;

        if(node->left!=NULL)
        {
            q.push(make_pair(node->left,level+1));
        }
        if(node->right!=NULL)
        {
            q.push(make_pair(node->right,level+1));
        }
    }
    
}
int main()
{
    int find;
    node *root=input_tree();
    cin>>find;
    // print_tree(root);
    find_level(root,find);
    return 0;
}