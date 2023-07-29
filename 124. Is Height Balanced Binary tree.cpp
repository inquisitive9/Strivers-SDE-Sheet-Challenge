pair<bool,int> solve(BinaryTreeNode<int>* root)

{

    if(root == nullptr)

    {

        pair<bool,int> p = make_pair(true,0);

        return p;

    }

 

    pair<bool,int> left = solve(root->left);

    pair<bool,int> right = solve(root->right);

 

    bool leftAns = left.first;

    bool rightAns = right.first;

 

    bool diff = abs(left.second - right.second) <= 1;

 

    pair<bool,int> ans;

    if(leftAns && rightAns && diff)

    {

        ans.first = true;

    }

    else{

        ans.first=false;

    }

 

    ans.second = max(left.second , right.second)+1;

 

    return ans;

}

bool isBalancedBT(BinaryTreeNode<int>* root) {

    return solve(root).first;

}
