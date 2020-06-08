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

// Globally initialized data structure to store nodes at the deepest level 
vector<int> deepestNodes;

// Declaration of helper functions
int findsMaxDepth(TreeNode* root);
void storingLevels(TreeNode* root, int level, int maxDepth);


class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        // Uses helper function to calculate max depth of BST
        int maxDepth = findsMaxDepth(root);

        // Sets inital sum of deepest nodes to 0
        int sum = 0;
        
        // Uses helper function to store all the nodes at the deepest level
        storingLevels(root, 1, maxDepth);
        
        // Sums elements in deepestNodes data structure
        for (int i = 0; i < deepestNodes.size(); i++) {
            sum = sum + deepestNodes[i];
        }
        
        // Clears the data structure to reset everything for other test cases 
        deepestNodes.clear();

        // Returns sum
        return sum;
    }
};

// Helper function to find the max depth level
int findsMaxDepth(TreeNode* root) {
        
    // When the root is null, return 0  
    if (root == nullptr) {
        return 0;
    }
    
    // Recursively call function to left and right children of node 
    int left = findsMaxDepth(root->left);
    int right = findsMaxDepth(root->right);

    // Depending on which child has the most children down the line,
    // Returns that number + 1 to account for root itself for its parent
    if (left >= right) {
        return left + 1;
    }
    else {
        return right + 1;
    }

}

// Helper function to fill data structure with nodes at deepest level
void storingLevels(TreeNode* root, int level, int maxDepth) {
    
    // When the root is not null
    if (root != nullptr) {
        
        // Recursively call function of the left child increasing the level by 1
        storingLevels(root->left, level+1, maxDepth);

        // If the level of root matched the maxDepth, add the roots value to data structure 
        if (level == maxDepth) {
            deepestNodes.push_back(root->val);
        }

        // Recursively call function of the right child increasing the level by 1
        storingLevels(root->right, level+1, maxDepth);
    }
}