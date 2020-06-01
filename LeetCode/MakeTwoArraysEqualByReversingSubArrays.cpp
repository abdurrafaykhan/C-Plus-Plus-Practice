class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        
        
        // If the two arrays are the same, so it is reversible
        if (target == arr) {
            return true;
        }

        // If the sizes of the arrays are different, arr can not reverse in any way to match target
        // So it is not reversable
        else if (target.size() != arr.size()){
            return false;
        }

        // If the sizes are the same, sort both from least to greatest, and if they're equal, it is reversable
        // If not equal, not reversible
        else {
            sort(target.begin(), target.end());
            sort(arr.begin(), arr.end());

            if (target == arr) {
                return true;
            }
            else {
                return false;
            } 
        }
    }
};