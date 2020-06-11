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

// Initialization of helper functions
TreeNode* collectingNodes(TreeNode* root);
TreeNode* copy(TreeNode* root);

// Initialization of data structures
vector<int> allNodes;
vector<int> newNodes;

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        // Goes through given BST, and stores all nodes values
        collectingNodes(root);
        
        // Used to calculate new individual node values 
        // using sum of all nodes greater than a given node
        int sum = 0;
        for (int i = 0; i < allNodes.size(); i++) {
            sum = sum + allNodes[i];
            newNodes.push_back(sum);
        }
        
        // Creates a Greater Sum Tree using the new values for nodes
        TreeNode* newCopy = copy(root);
        
        // Clears the data structures for future test cases
        allNodes.clear();
        newNodes.clear();
        
        // Returns pointer to key of new GST
        return newCopy;
    }
};


// Helper function to collect all nodes value
TreeNode* collectingNodes(TreeNode* root) {

    // If pointing to nothing, just return
    if (root == nullptr) {
        return nullptr;
    }

    // Otherwise, travel down the right subtrees
    TreeNode* right = collectingNodes(root->right);
    if (right != nullptr) {
        return right;
    }
    
    // Collect nodes in order from greatest to smallest
    allNodes.push_back(root->val);

    // Travel down the left subtrees
    return collectingNodes(root->left);
}

// Helper function to create new GST
TreeNode* copy(TreeNode* root) {
    
    // If pointing to null, just return
    if (root == NULL ) {
        return root;
    }

    // Otherwise create a new copy
    TreeNode* temp = new TreeNode();

    // Go down right subtrees
    temp->right = copy(root->right);

    // Set the value of the node to the correct sum
    temp->val = newNodes[0];

    // Remove the sum from the data structure so the next node is set correctly
    newNodes.erase(newNodes.begin());

    // Go down left subtree
    temp->left = copy(root->left);    
    
    // Return the new GST node
    return temp;
}