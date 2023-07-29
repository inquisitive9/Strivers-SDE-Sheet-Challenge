#include <bits/stdc++.h>

 void help(BinaryTreeNode<int>*root,vector<int>&in,vector<int>&pre,vector<int>&post) 

 

{ 

   if(root==NULL)return; 

 

   pre.push_back(root->data);  

 

  help(root->left,in,pre,post);

 

    in.push_back(root->data);   

 

 help(root->right,in,pre,post);  

 

  post.push_back(root->data);

 

}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){  

  // Write your code here. 

 

   vector<int>in,pre,post;  

  

vector<vector<int>>ans;  

 

  help(root,in,pre,post);   

 

 ans.push_back(in);  

 

  ans.push_back(pre); 

 

   ans.push_back(post); 

 

   return ans;

}
