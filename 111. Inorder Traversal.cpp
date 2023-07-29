void solve(TreeNode *root,vector<int>& v){

    if(root==NULL){

        return;

    }

    solve(root->left,v);

    v.push_back(root->data);

    solve(root->right,v);

}

vector<int> getInOrderTraversal(TreeNode *root)

{

    vector<int> v;

    solve(root,v);

    return v;

}
