/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==nullptr || q==nullptr)
          return p==q;

          queue<TreeNode*>q1;
          q1.push(p);
           queue<TreeNode*>q2;
           q2.push(q);


             while(!q1.empty() && !q2.empty())
        {
            TreeNode* temp1 = q1.front();
            q1.pop();

            TreeNode* temp2 = q2.front();
            q2.pop();

            if(temp1->val != temp2->val)
                return false;

                 if((temp1->left == nullptr) != (temp2->left == nullptr))
                return false;

            if((temp1->right == nullptr) != (temp2->right == nullptr))
                return false;

            if(temp1->left != nullptr)
                q1.push(temp1->left);

            if(temp1->right != nullptr)
                q1.push(temp1->right);

            if(temp2->left != nullptr)
                q2.push(temp2->left);

            if(temp2->right != nullptr)
                q2.push(temp2->right);
        }

        return q1.empty() && q2.empty();
    }

        
    
};