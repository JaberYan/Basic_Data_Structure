vector<int> v;
void level_order_travese(BinaryTreeNode* root)
{
    queue<node> q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode* p=q.front();
        q.pop();

        v.push_back(p->val);

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
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order_travese(root);
    return
}