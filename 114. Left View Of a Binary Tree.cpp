vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    queue<TreeNode<int>*>q;

    if(!root)   return ans;
    q.push(root);

    while(!q.empty()){
        int s=q.size();
        ans.push_back(q.front()->data);
        while(s--){
            TreeNode<int>* t = q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
    }
    return ans;
}
