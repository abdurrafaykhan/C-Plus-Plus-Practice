class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        bool reversable = false;
        
        if (target == arr) {
            reversable = true;
        }
        else if (target.size() != arr.size()){
            reversable = false;
        }
        else {
            
            sort(target.begin(), target.end());
            sort(arr.begin(), arr.end());
            
            if (target == arr) {
                reversable = true;
            }
            else {
                reversable = false;
            } 
        }
        
        
        return reversable;
  
    }
};