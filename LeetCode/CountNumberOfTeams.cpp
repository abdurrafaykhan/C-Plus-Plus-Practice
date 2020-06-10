class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        // Initialize final count to be returned
        int finalCount = 0;
        
        // Initialize indexes used initally for teams
        int i = 0;
        int j = 1;
        int k = 2;
        
        // Loop until the indices exceed the last possibility
        while (i <= rating.size()-3 && j <= rating.size()-2 && k <= rating.size()-1) {
            
            // Increase finalCount when condition for teams are met
            if (rating[i] < rating[j] && rating[j] < rating[k]) {
                finalCount = finalCount + 1;
            }
            if (rating[i] > rating[j] && rating[j] > rating[k]) {
                finalCount = finalCount + 1;
            }
                
            // In the instance where k approaches end of list, increment j by 1,
            // and restart k accordingly
            if (i != rating.size()-3 && j != rating.size()-2 && (k+1) == rating.size()) {
                
                j = j + 1;
                k = j + 1;
            }

            // In the instance where k and j are the last two elements, increment i by 1
            // and restart j and k accordingly
            else if (i != rating.size()-3 && j == rating.size()-2 && (k+1) == rating.size()) {
                i = i + 1;
                j = i + 1;
                k = j + 1;
            }

            // Otherwise, increment k
            else {
                k = k + 1;
            }
        }
        
        // Return final count for possible teams
        return finalCount;
    }
};




// -------------------------------------------------
// Other possible solution using for loops is below
// -------------------------------------------------

/*
class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        // Initialize final counter to be returned
        int finalCount = 0;
        
        // Goes through all possible teams
        for (int i = 0; i < rating.size(); i++) {
            
            for (int j = 0; j < rating.size(); j++) {
                
                // Ensures i < j
                if (j > i) {
                    
                    for (int k = 0; k < rating.size() ; k++) {
                        
                        // Ensures j < k
                        if (k > j) {
                            
                            // Increment finalCount if condition for teams are met
                            if (rating[i] > rating[j] && rating[j] > rating[k]) {
                                finalCount = finalCount + 1;
                            }
                            if (rating[i] < rating[j] && rating[j] < rating[k]) {
                                finalCount = finalCount + 1;
                            }
                        }
                    }
                }
            }
        }
        // Returns count of possible teams
        return finalCount;
    }
};
*/