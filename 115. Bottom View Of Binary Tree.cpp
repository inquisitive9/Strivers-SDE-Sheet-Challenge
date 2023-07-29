vector<int> bottomView(BinaryTreeNode<int> * root){

 

    // Write your code here.

    vector<int> ans;

        if(root == NULL)

        {

            return ans;

        }

        

        map<int,int> bottomNode;//for Horizontal distace and nodes

        queue<pair<BinaryTreeNode<int>*,int> > q; // for Node and Horizontal distance

        

        q.push(make_pair(root,0));

        

        while(!q.empty())

        {

            pair<BinaryTreeNode<int>*,int> temp = q.front();

            q.pop();

            BinaryTreeNode<int>* frontNode = temp.first;

            int HD = temp.second;

            

            bottomNode[HD] = frontNode->data;

            

            if(frontNode->left)

            {

                q.push(make_pair(frontNode->left,HD-1));

            }

            

            if(frontNode->right)

            {

                q.push(make_pair(frontNode->right,HD+1));

            }

        }

        for(auto i: bottomNode)

        {

            ans.push_back(i.second);

        }

        return ans;

    

}
