vector<int> getTopView(TreeNode<int> *root) {

    // Write your code here.

    vector<int>ans;

    unordered_map<int,int>m;

    queue<pair<TreeNode<int>*,int>>q;

    if(!root)return ans;

    q.push({root,0});

    while(!q.empty()){

        TreeNode<int>* temp=q.front().first;

        int h=q.front().second;

        q.pop();

        if(!m[h])m[h]=temp->val;

        if(temp->left)q.push({temp->left,h-1});

        if(temp->right)q.push({temp->right,h+1});

    }

    for(auto x:m){

        ans.push_back(x.second);

    }

    return ans;

}

