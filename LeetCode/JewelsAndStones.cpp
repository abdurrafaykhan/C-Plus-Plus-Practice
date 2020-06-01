class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        // Initialized counter to be returned
        int count = 0;
        
        // Compare every character in J with every character in S
        // If the characters match, increase count
        for (int i = 0; i < J.size(); i++) {
            for (int j = 0; j < S.size(); j++) {
                if (J[i] == S[j]) {
                    count = count + 1;
                }  
            }
        }
        
        // Return count
        return count;  
    }
};