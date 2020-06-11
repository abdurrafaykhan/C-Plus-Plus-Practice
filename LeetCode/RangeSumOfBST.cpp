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

// Declaration of helper function
TreeNode* traverse(TreeNode* root);

// Global initialization of data structure holding all nodes
vector<int> allNodes;

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {

        // Initialize final sum variable        
        int finalSum = 0;
        
        // Call helper function to fill data structure
        traverse(root);
        
        // Go through data structure elements and add to sum if in bounds
        for (int i = 0; i < allNodes.size(); i++) {
            if (allNodes[i] >= L && allNodes[i] <= R) {
                finalSum = finalSum + allNodes[i];
            }
        }
        
        // Clear data structure for other test cases
        allNodes.clear();

        // Returns final sum of nodes within bounds
        return finalSum;
    }
};

TreeNode* traverse(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    else {
        allNodes.push_back(root->val);
    }
    TreeNode* left = traverse(root->left);
    if (left != 0) {
        
        return left;
    }
    return traverse(root->right);
}