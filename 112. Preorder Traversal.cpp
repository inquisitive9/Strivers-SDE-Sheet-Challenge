#include <bits/stdc++.h> 

/*

    Following is Binary Tree Node structure:

    class TreeNode

    {

    public:

        int data;

        TreeNode *left, *right;

        TreeNode() : data(0), left(NULL), right(NULL) {}

        TreeNode(int x) : data(x), left(NULL), right(NULL) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}

    };

*/

vector<int> getPreOrderTraversal(TreeNode *root)

{

    vector<int>v;

    TreeNode*cur=root;

    while(cur!=NULL){

        if(cur->left==NULL){

            v.push_back(cur->data);

            cur=cur->right;

        }

        else{

            TreeNode *temp=cur->left;

            while(temp->right!=NULL && temp->right!=cur){

                temp=temp->right;

            }

            if(temp->right==NULL){

                v.push_back(cur->data);

                temp->right=cur;

                cur=cur->left;

            }else{

                temp->right=NULL;

                cur=cur->right;

            }

        }

    }

    return v;

}

