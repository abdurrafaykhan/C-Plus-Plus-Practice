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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        // If the vector to create a max BST of is empty, return nullptr
        if (nums.size () == 0) {
            return nullptr;
        }
        
        // Finds max element and stores its index and value
        std::vector<int>::iterator itr = max_element(nums.begin(), nums.end());
        int index= distance(nums.begin(), itr);
        int maxNumber = nums[index];
        
        // Initializes vectors for its left and right subtree
        vector<int> leftVector;
        vector<int> rightVector;
        
        // Stores values for left and right subtrees
        for (int i = 0; i < index; i++) {
            leftVector.push_back(nums[i]);
        }
        for (int i = index + 1; i < nums.size(); i++) {
            rightVector.push_back(nums[i]);
        }
        
        // Creates the root with the max number in nums
        TreeNode* max = new TreeNode(maxNumber);
        
        // Creates left/right subtree using the left/right subtree vectors
        max->left = constructMaximumBinaryTree(leftVector);
        max->right = constructMaximumBinaryTree(rightVector);
        
        // Returns the max root
        return max;
    }
};