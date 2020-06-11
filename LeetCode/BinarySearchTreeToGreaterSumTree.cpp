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
/*
int sum = 0;
TreeNode* newRoot = new TreeNode(7);
TreeNode* newGST(TreeNode* root, TreeNode* newRoot);

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        
        
        
        TreeNode* hhh = newGST(root, newRoot);
        cout << "Final key value of: " << newRoot->val << endl;
        return newRoot;
        
        
    }
};


TreeNode* newGST(TreeNode* root, TreeNode* neww) {
    
    if (root == nullptr) {
        neww = nullptr;
        return nullptr;
    }
    
    neww = new TreeNode();
    cout << "created new with value: " << neww->val << endl;
    
    
    TreeNode* right = newGST(root->right, neww->right);
    if (right != nullptr) {
        return right;
    }
    
    sum = sum + root->val;
    
    neww->val = sum;
    
    cout << "new value of : " << neww->val << endl;
    return newGST(root->left, neww->left);
    
}

*/


TreeNode* collectingNodes(TreeNode* root);
TreeNode* copy(TreeNode* root);
vector<int> allNodes;
vector<int> newNodes;

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        
        collectingNodes(root);
        
        int sum = 0;
        
        for (int i = 0; i < allNodes.size(); i++) {
            
            sum = sum + allNodes[i];
            newNodes.push_back(sum);
            
        }
        
        for (int i = 0; i < newNodes.size(); i++) {
            cout << newNodes[i] << endl;
        }
        
        
        TreeNode* newCopy = copy(root);
        
        
        allNodes.clear();
        newNodes.clear();
        
        
        
        return newCopy;
        
    }
};




TreeNode* collectingNodes(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }



    TreeNode* right = collectingNodes(root->right);
    if (right != nullptr) {
        return right;
    }
    allNodes.push_back(root->val);
    return collectingNodes(root->left);
}

TreeNode* copy(TreeNode* root) {
    
    if (root == NULL ) {
        return root;
    }
    //create new node and make it a copy of node pointed by root
    TreeNode* temp = new TreeNode();
    temp->right = copy(root->right);  //cloning right child
    temp->val = newNodes[0];    //copying data
    newNodes.erase(newNodes.begin());
    temp->left = copy(root->left);    //cloning left child
    
    return temp;
}