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
        
        // If the vector is empty, return null
        if (preorder.size() == 0) {
            return nullptr;
        }
        
        // If not empty, create the new root using first element
        TreeNode* root = new TreeNode(preorder[0]);
        
        cout << "Creates root with value of :" << preorder[0] << endl;
        
        
        // If vector size is 1, then the root is the last element, so return root
        if (preorder.size() == 1) {
            cout << "Size of one, so returning root" << endl;
            return root;
        }
        
        cout << "Index of next highest digit is 0" << endl;
        // Sets index to 0
        int index = 0;
        
        // Finds index of first number higher than that in the first index
        for (int i = 0; i < preorder.size(); i++) {
            if (preorder[i] > preorder[0]) {
                index = i;
                break;
            }
        }
        
        cout << "Index of next highest digit is:" << index << endl;
        
        // If index is still 0, it means the rest of the indexes are all smaller than the first index
        // So remove first index from the vector and pass the remaining vector as the left subtree of root
        // Then return root
        if (index == 0) {
            
            cout << "Index remains 0, so all numbers are smaller than index of 0" << endl;
            
            preorder.erase(preorder.begin());
            cout << "Erased first digit, passed in rest of array to left child of root" << endl;
            root->left = bstFromPreorder(preorder);
            return root;
        }
        
        // Initializes vectors for left and right subtrees
        vector<int> left;
        vector<int> right;
        
        cout << endl;
        // Fills vectors using the calculated index as a seperator
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

        // Iteratively passes left vector to left subtree
        root->left = bstFromPreorder(left);
        cout << "After coming from left child, Before going to right child" << endl;
        // Iteratively passes right vector to right subtree
        root->right = bstFromPreorder(right);
        cout << "Returning root" << endl;
        // Returns root
        return root;
       
        
    }
};