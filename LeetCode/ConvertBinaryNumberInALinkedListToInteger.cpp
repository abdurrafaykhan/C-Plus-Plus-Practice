/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        // Initialize vector to store all digits in linked list
        vector<int> binaryDigits;
        
        // Initializes temp pointer to traverse list
        ListNode* temp = head;
        
        // Goes through list and adds value to vector
        while (temp != nullptr) {
            binaryDigits.push_back(temp->val);
            temp = temp->next;
        }
        
        // Initializes decimal conversion to be returned
        int decimal = 0;
        
        // Reverses vector to put digits in order
        reverse(binaryDigits.begin(), binaryDigits.end());
        
        // Sums all the digits by multiplying by correct index value
        for (int i = 0; i < binaryDigits.size(); i++) {
            decimal = decimal + binaryDigits[i] * pow(2, i);
        }
        
        // Returns final decimal conversion value
        return decimal;
    }
    
};
