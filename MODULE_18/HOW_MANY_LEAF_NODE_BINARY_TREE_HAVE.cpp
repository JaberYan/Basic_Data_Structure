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
    while(!q.empty())
    {
        //1.ber kore kunu variable e rakha
        node* p=q.front();
        q.pop();

        //2. jabotio kaj
        int l,r;
        cin>>l>>r;

        node* myleft;
        if(l==-1) myleft=NULL;
        else myleft=new node(l);

        node* myright;
        if(r==-1) myright=NULL;
        else myright=new node(r);

        p->left=myleft;
        p->right=myright;

        //3. children gula k rakha 
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
vector<int> v;
void count_leaf_node(node* root)
{
    int l,r;
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) v.push_back(root->val);
    // return 1;
    count_leaf_node(root->left);
    count_leaf_node(root->right);
    // return l+r;
}
int main()
{
    node* root=input_tree();   
    count_leaf_node(root);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    // cout<<total_leaf_node<<endl;
    return 0;
}

// 10 20 30 70 150 120 40 80 90 -1 -1 130 -1 60 50 -1 -1 100 -1 -1 40 -1 -1 -1 -1 -1 110 -1 -1 -1 -1 