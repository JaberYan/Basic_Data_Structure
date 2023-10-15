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
node* array_to_bst(int a[],int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    node* root=new node(a[mid]);
    node* leftroot=array_to_bst(a,l,mid-1);
    node* rightroot=array_to_bst(a,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    node* root=array_to_bst(a,0,n-1);
    print_level_order(root);
    return 0;
}