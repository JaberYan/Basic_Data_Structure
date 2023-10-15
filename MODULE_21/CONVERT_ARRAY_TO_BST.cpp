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
node* convert(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    node* root;
    root=new node(a[mid]);
    node* leftnode=convert(a,n,l,mid-1);
    node* rightnode=convert(a,n,mid+1,r);
    root->left=leftnode;
    root->right=rightnode;
    return root;
}
void level_order_print(node* root)
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    node* root=convert(a,n,0,n-1);
    level_order_print(root);
    return 0;
}