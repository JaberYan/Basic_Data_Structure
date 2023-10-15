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
void level_order(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1. ber kore niya asa
        node* f=q.front();
        q.pop();

        //2. jabotio ja kaj ache 
        cout<<f->val<<" ";

        //3. children gulo k rakha
        // if(f->right!=NULL)
        // {
        //     q.push(f->right);
        // }
        if(f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    node* root=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    node* e=new node(60);
    node* f=new node(70);
    node* g=new node(80);
    node* h=new node(90);
    node* i=new node(100);

    //connection

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;

    level_order(root);
    return 0;
}