class Solution {
public:
    string defangIPaddr(string address) {
        
        string final;
        
        for (int i = 0; i < address.size(); i++) {
            
            if (address[i] != '.') {
                final = final + address[i];
            }
            else {
                final = final + "[.]";
            }
            
            
            
        }
        
        return final;
        
        
        
    }
};