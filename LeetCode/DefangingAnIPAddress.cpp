class Solution {
public:
    string defangIPaddr(string address) {
        
        // Initializes final string to be returned
        string final;
        
        // Goes through every character in address
        for (int i = 0; i < address.size(); i++) {
            
            // If there is a '.', replace '[.]'
            // If not, keep the same character from address
            if (address[i] != '.') {
                final = final + address[i];
            }
            else {
                final = final + "[.]";
            }
        }
        
        // Return final string
        return final;
    }
};