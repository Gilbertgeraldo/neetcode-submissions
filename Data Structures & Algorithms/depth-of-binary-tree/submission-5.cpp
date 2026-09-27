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
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        int deepest = 0;
        while(!q.empty()){
            auto [node,depth] = q.front();
            q.pop();
            deepest = max(deepest,depth);
            if(node->left){
                q.push({node->left,depth+1});
            }
            if(node->right){
                q.push({node->right,depth + 1});
            }
        }
        return deepest;
    }
};