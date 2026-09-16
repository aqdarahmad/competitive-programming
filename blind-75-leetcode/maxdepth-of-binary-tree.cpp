#include<bits/stdc++.h>

// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

  int maxdepth(TreeNode *root)
   {
    if(root==nullptr)
     return 0;
    
     queue<TreeNode*>q;
      q.push(root);
     int rslt=0;

     while(!q.empty())
      {  int sz=q.size();
          rslt++;

          while(sz--)
           {
            TreeNode *temp=q.front();
            q.pop();
            if(temp->left!=nullptr)
             q.push(temp->left);
            if(temp->right!=nullptr)
             q.push(temp->right); 
           }


      }

      return rslt;
   }