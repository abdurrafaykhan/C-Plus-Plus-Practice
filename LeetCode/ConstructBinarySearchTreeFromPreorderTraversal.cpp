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
        
        cout << "Creates root with value of :" << preorder[0] << endl;
        
        
        
        if (preorder.size() == 1) {
            cout << "Size of one, so returning root" << endl;
            return root;
        }
        
        cout << "Index of next highest digit is 0" << endl;
        int index = 0;
        
        for (int i = 0; i < preorder.size(); i++) {
            if (preorder[i] > preorder[0]) {
                index = i;
                break;
            }
        }
        
        cout << "Index of next highest digit is:" << index << endl;
        
        
        if (index == 0) {
            
            cout << "Index remains 0, so all numbers are smaller than index of 0" << endl;
            
            preorder.erase(preorder.begin());
            cout << "Erased first digit, passed in rest of array to left child of root" << endl;
            root->left = bstFromPreorder(preorder);
            return root;
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
        cout << endl;
        cout << "Before going to left child" << endl;
        root->left = bstFromPreorder(left);
        cout << "After coming from left child, Before going to right child" << endl;
        root->right = bstFromPreorder(right);
        cout << "Returning root" << endl;
        return root;
       
        
    }
};