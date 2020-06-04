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


int ret();




class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        
        
        int sum = 0;
        
        if (root == nullptr) {
            cout << "in base case" <<endl;
            return 0;
        }
        else {
            
            cout << "before" <<endl;
            
            if ((root->val)%2 == 0) {
                
                if (root->left != nullptr) {
                    if (root->left->left != nullptr) {
                        cout << "in 1 case" << root->left->left->val << endl;
                        sum = sum + root->left->left->val;
                        cout << "in 1 case" << sum << endl;
                    }
                    if (root->left->right != nullptr) {
                        cout << "in 2 case" << root->left->right->val << endl;
                        sum = sum + root->left->right->val;
                        cout << "in 2 case" << sum << endl;
                    }
                }
                
               if (root->right != nullptr) {
                   if (root->right->left != nullptr) {
                        cout << "in 3 case" << root->right->left->val << endl;
                        sum = sum + root->right->left->val;
                        cout << "in 3 case" << sum << endl;
                    }
                    if (root->right->right != nullptr) {
                        cout << "in 4 case" << root->right->right->val << endl;
                        sum = sum + root->right->right->val;
                        cout << "in 4 case" << sum << endl;
                    }
               }
                
                
                
                
                cout << "after" << sum << endl;
                
                return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
            }
            else {
                return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
            }
            
            
            
            
            
            
            
            
            
            
        
     
        }
        
        
        
        
        
        
        
        
        
        
        
        
        return 0;
        
        
    
        
        
    }
};