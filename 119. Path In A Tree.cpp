bool get(TreeNode<int>*root,vector<int>&ans,int &x)

{

    if(root==NULL)return false;

 

    ans.push_back(root->data);

 

    if(root->data==x)return true;

 

    if(get(root->left,ans,x)||get(root->right,ans,x))

    return true;

 

    ans.pop_back();

    return false;

 

}

 

vector<int> pathInATree(TreeNode<int> *root, int x)

{

    // Write your code here.

    vector<int>ans;

    get(root,ans,x);

    return ans;

}
