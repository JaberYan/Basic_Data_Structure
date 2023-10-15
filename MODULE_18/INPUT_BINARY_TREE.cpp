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
// node* input_tree()
// {
//     int val;
//     cin>>val;
//     node* root;
//     if(val==-1) root=NULL;
//     else root=new node(val);
//     queue<node*> q;
//     if(root!=NULL) q.push(root);
//     while (!q.empty())
//     {
//         //1. ber kore kunu variable e rakha
//         node* p=q.front();
//         q.pop();

//         //2.jabotio kaj
//         int l,r;
//         cin>>l>>r;

//         node* myLeft;
//         node* myRight;

//         if(l==-1) myLeft=NULL;
//         else myLeft=new node(l);

//         if(r==-1) myRight=NULL;
//         else myRight=new node(r);

//         p->left=myLeft;
//         p->right=myRight;

//         //3. children gulo k rakha
//         if(p->left!=NULL)
//         {
//             q.push(p->left);
//         }

//         if(p->right!=NULL)
//         {
//             q.push(p->right);
//         }
//     }
//     return root;
// }

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
void level_order(node* root)
{
    if(root==NULL)
    {
        cout<<"tree nai"<<endl;
        return;
    }
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
    node* root=input_tree();
    level_order(root);
    return 0;
}