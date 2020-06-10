class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        
        // Initialize the P vector and final vector
        vector<int> P;
        vector<int> final;
        
        // Fill the P vector with correct values
        for (int i = 1; i <= m; i++) {
            P.push_back(i);
            cout << P[i-1] << endl;
        }
        
        // Goes through all queries element
        for (int i = 0; i < queries.size(); i++) {
            
            // Sets the number to find in the permutation
            int num = queries[i];
            
            // Sets the index where num is in the permutation, adds index to final
            std::vector<int>::iterator itr = find(P.begin(), P.end(), num);
            int index= distance(P.begin(), itr);
            final.push_back(index);
            
            // Removes num from its index and moves it to the front
            P.erase(P.begin() + index);
            P.insert(P.begin(), num);
        }
        
        // Return vector containing indices
        return final;
    }
};