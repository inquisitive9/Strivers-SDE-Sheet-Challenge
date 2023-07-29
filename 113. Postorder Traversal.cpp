void solve(TreeNode *root,vector<int>&answer)

{

    if(root==NULL)

    {

        return ;

    }

    solve(root->left,answer);

    solve(root->right,answer);

    answer.push_back(root->data);

}

vector<int> getPostOrderTraversal(TreeNode *root)

{

    vector<int>answer;

    solve(root,answer);

    return answer;

}
