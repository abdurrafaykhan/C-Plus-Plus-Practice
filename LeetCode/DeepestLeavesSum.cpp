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

int findsMaxDepth(TreeNode* root);
vector<int> deepestNodes;
void storingLevels(TreeNode* root, int level, int maxDepth);

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        int maxDepth = findsMaxDepth(root);
        int sum = 0;
        
        storingLevels(root, 1, maxDepth);
        
        for (int i = 0; i < deepestNodes.size(); i++) {
            sum = sum + deepestNodes[i];
        }
        deepestNodes.clear();
        return sum;
    }
};


int findsMaxDepth(TreeNode* root) {
        
    if (root == nullptr) {
        return 0;
    }
    
    int left = findsMaxDepth(root->left);
    int right = findsMaxDepth(root->right);

    if (left >= right) {
        return left + 1;
    }
    else {
        return right + 1;
    }

}


void storingLevels(TreeNode* root, int level, int maxDepth) {
        
    if (root != nullptr) {
        
        storingLevels(root->left, level+1, maxDepth);
        if (level == maxDepth) {
            deepestNodes.push_back(root->val);
            cout << "pushed back" << root->val << endl;
        }
        cout << root->val << "is in level " << level <<endl;
        //levels[level].push_back(root->val);
        storingLevels(root->right, level+1, maxDepth);
    }
    
    

}