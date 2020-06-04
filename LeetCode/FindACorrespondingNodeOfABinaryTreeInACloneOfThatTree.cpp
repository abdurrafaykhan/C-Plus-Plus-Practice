/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        // Return the target when its found
        if (original == target) {
            return cloned;
        }

        // If the node is empty, return null
        else if (original == nullptr) {
            return nullptr;
        }
        
        // Find the left child of the node
        TreeNode* found = getTargetCopy(original->left, cloned->left, target);

        // If the left child is an actual node, return it
        if (found != nullptr) {
            return found; 
        }

        // Continue to look for target in right child
        return getTargetCopy(original->right, cloned->right, target);
    }
};