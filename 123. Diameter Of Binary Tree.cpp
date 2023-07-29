int maxDepth(TreeNode<int> *root,int & dia) {

    // Write your code here.

    if(root == NULL)

    {

        return 0;

    }

 

    int left = maxDepth(root->left,dia);

    int right = maxDepth(root->right,dia);

 

    dia = max(dia,left+right);

    return 1+max(left,right);

}

int diameterOfBinaryTree(TreeNode<int> *root)

{

    // Write Your Code Here.

    int diameter =0;

    maxDepth(root,diameter);

    return diameter;

}
