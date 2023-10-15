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
void print(node* root)
{
    queue<node*> q;
    if(root!=NULL) q.push(root);
    while (!q.empty())
    {
        /* code */
        node* p=q.front();
        q.pop();

        cout<<p->val<<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
}
int main()
{
    node* root=input_tree();
    long long int sum=0;
	queue<pair<node*,int>> q;
	if(root!=NULL) q.push({root,1});
	while(q.empty()!=NULL)
	{
		bool frq[3005]={false};
		pair<node*,int> p=q.front();
		node* node=p.first;
		int level=p.second;
		q.pop();

		if(frq[level]==false)
		{
			sum=sum+node->val;
			frq[level]=true;
		}
		if(node->left) q.push({node->left,level+1});
		if(node->right) q.push({node->right,level+1});
	}
    cout<<sum<<endl;
    return 0;
}