  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {

        priority_queue<int, vector<int>, greater<int>> pq;

        queue<TreeNode*> q;
        q.push(root); 

        while(!q.empty())
         {
            TreeNode *temp=q.front();
            q.pop();
            pq.push(temp->val);

            if(temp->left!=nullptr)
             q.push(temp->left);

              if(temp->right!=nullptr)
                q.push(temp->right);


         }


         while(k>1)
          {
            pq.pop();
            k--;
          }

          return pq.top();

    }
};