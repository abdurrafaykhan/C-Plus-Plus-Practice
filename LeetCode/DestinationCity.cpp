class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        string final;
        bool found = false;
        
        
        for (int i = 0; i < paths.size(); i++) {
            string first = paths[i][1];
            found = false;
            
            for (int j = 0; j < paths.size(); j++) {
                if (first == paths[j][0]) {
                    found = true;
                }
            }
            
            if (found == false) {
                final = first;
            }
            
        }
        
        
        return final;
    }
};