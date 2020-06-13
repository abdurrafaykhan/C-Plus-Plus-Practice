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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        // If there is no element in the BST there, insert val
        if (root == nullptr) {
            TreeNode* insertion = new TreeNode(val);
            return insertion;
        }
        
        // If val is less than root, iterate on left subtree, otherwise right subtree
        if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        }
        else if (val > root->val) {
            root->right = insertIntoBST(root->right, val);
        }
        
        // Return root
        return root;
    }
};