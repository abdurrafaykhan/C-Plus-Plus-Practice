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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        if (preorder.size() == 0) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[0]);
        
        if (preorder.size() == 1) {
            return root;
        }
        int index = 0;
        
        for (int i = 0; i < preorder.size(); i++) {
            if (preorder[i] > preorder[0]) {
                index = i;
                break;
            }
        }
        
        vector<int> left;
        vector<int> right;
        
        cout << endl;
        for (int i = 1; i < index; i++) {
            left.push_back(preorder[i]);
        }
        
        for (int i = index; i < preorder.size(); i++) {
            right.push_back(preorder[i]);
        }
        cout << "Following is left array" << endl;
        for (int i = 0; i < left.size(); i++) {
        }
        cout << "Following is right array" << endl;
        for (int i = 0; i < right.size(); i++) {
        }
        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);
        return root;
       
        
    }
};