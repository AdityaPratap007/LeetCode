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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> result;
        postorder(root, result);
        return result;
    }
     void postorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;
        
        // Traverse left subtree
        postorder(node->left, result);
        
        // Traverse right subtree
        postorder(node->right, result);
        
        // Visit root
        result.push_back(node->val);
    }
};