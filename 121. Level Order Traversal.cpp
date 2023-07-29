vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    queue<BinaryTreeNode<int>*>q;

    if(!root)   return ans;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* t= q.front();
        int val = t->val;
        ans.push_back(val);
        q.pop();
        if(t->left) q.push(t->left);
        if(t->right)  q.push(t->right);
    }
    return ans;
}
