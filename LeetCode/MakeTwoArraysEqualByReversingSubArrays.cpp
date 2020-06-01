class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        // Initialized variable that determines if arr is reversible to target
        bool reversable = false;
        
        // If the two arrays are the same, so it is reversible
        if (target == arr) {
            reversable = true;
        }

        // If the sizes of the arrays are different, arr can not reverse in any way to match target
        // So it is not reversable
        else if (target.size() != arr.size()){
            reversable = false;
        }

        // If the sizes are the same, sort both from least to greatest, and if they're equal, it is reversable
        // If not equal, not reversible
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
        
        // Return status of reversability
        return reversable;
  
    }
};