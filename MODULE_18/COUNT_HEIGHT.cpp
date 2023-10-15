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
    int coutn_height=count_height(root);
    cout<<coutn_height<<endl;
    return 0;
}