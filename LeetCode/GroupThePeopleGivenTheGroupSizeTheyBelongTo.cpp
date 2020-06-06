class Solution {
public:

    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        // Initialize vectors to be used in the sorting algorithm
        vector<vector<int>> final;
        vector<vector<int>> sortedIndexes;
        vector<int> sameSizes;
        vector<int> toBeDivided;
        vector<int> dividedGroups;

        // Initialized variables to be used in sorting algorithm
        int size = 0;

        // Goes through all possible group sizes
        for (int i = 1; i <= 500; i++) {

            // Clears the group after sorting each size #
            sameSizes.clear();

            // Goes through the groupSizes vector and sorts indexes belonging to corresponding group sizes
            for (int j = 0; j < groupSizes.size(); j++) {
                if (groupSizes[j] == i) {
                    sameSizes.push_back(j);
                }
            }

            // After each size # is complete, add to sorted vector
            sortedIndexes.push_back(sameSizes);
        }

        // Goes through indexes that are sorted into groups based off of size
        for (int i = 0; i < sortedIndexes.size(); i++) {
            
            // Sets the size correctly to match the index and Sets current group to be divided
            size = i+1; 
            toBeDivided = sortedIndexes[i];
            
            // Checks if there are indexes to be divided
            if (toBeDivided.size() != 0) {

                // Clears the group after max size has been reached
                dividedGroups.clear();
                
                // Goes through the indexes needed to be sorted
                for (int j = 0; j < toBeDivided.size(); j++) {
                    
                    dividedGroups.push_back(toBeDivided[j]);
                    
                    // When max size is reached, push back to final vector
                    if (dividedGroups.size() == size) {
                        final.push_back(dividedGroups);
                        dividedGroups.clear();
                    }
                }
            }
        }

        return final; 
    }
};