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
    int sumEvenGrandparent(TreeNode* root) {
        
        // Initialized sum variable
        int sum = 0;
        
        // Base case when the node is empty
        if (root == nullptr) {
            return 0;
        }

        // When there is a node
        else {
            
            // Check if node is even number, if even...
            if ((root->val)%2 == 0) {
                
                // Check if the node has a left child, if left child exists...
                if (root->left != nullptr) {

                    // Check if the node has a left-left grandchild, if grandchild exists, add to sum
                    if (root->left->left != nullptr) {
                        sum = sum + root->left->left->val;
                    }

                    // Check if the node has a left-right grandchild, if grandchild exists, add to sum
                    if (root->left->right != nullptr) {
                        sum = sum + root->left->right->val;
                    }
                }
                
                // Check if the node has a right child, if left child exists...
                if (root->right != nullptr) {

                    // Check if the node has a right-left grandchild, if grandchild exists, add to sum
                    if (root->right->left != nullptr) {
                        sum = sum + root->right->left->val;
                    }

                    // Check if the node has a right-right grandchild, if grandchild exists, add to sum
                    if (root->right->right != nullptr) {
                        sum = sum + root->right->right->val;
                    }
               }

                // Recursively add sum to nodes children
                return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
            }

            // If node is not even, Recursively add sum to nodes children
            else {
                return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
            }
        }
        // Final return incase conditions do not work
        return 0;
    }
};