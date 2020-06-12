class Solution {
public:
    string toLowerCase(string str) {
        
        // Initializes new string for lowercase characters
        string lower;
        
        // Goes through str, adds lowercase version of letters to lower
        for (int i = 0; i < str.size(); i++) {
            lower.push_back(tolower(str[i]));
        }
        
        // Returns lowercase version of str
        return lower;
    }
};