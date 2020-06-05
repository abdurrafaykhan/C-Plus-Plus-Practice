class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>> final;

        
        
        vector<int> temp;
        
        for (int i = 1; i <= 500; i++) {
            temp.clear();
            for (int j = 0; j < groupSizes.size(); j++) {
                
                if (groupSizes[j] == i) {
                    temp.push_back(j);
                }
            }
            final.push_back(temp);
            
            
        }
        
        
        
        
        
        
        
        
        int size = 0;
        cout << final.size() << endl;
        vector<vector<int>> newFinal;
        temp.clear();
        vector<int> workingcopy;
        int tempsize = 0;
        
        
        
        for (int i = 0; i < final.size(); i++) {
            
           
            
            size = i+1;
            
            
            workingcopy = final[i];
            
            if (workingcopy.size() != 0) {
                temp.clear();
                
                for (int j = 0; j < workingcopy.size(); j++) {
                    
                    temp.push_back(workingcopy[j]);
                    
                    if (temp.size() == size) {
                        newFinal.push_back(temp);
                        temp.clear();
                    }
                    
                    
                }
                
            }
            
            
        }

        /*
        
        
        
        
        
        
        
        
        
        
        vector<vector<int>> final;
        vector<int> temp;
        
        for (int i = 1; i <= 500; i++) {
            
      
            
    
            
            if (groupSizes[i] == groupSizes[i+1]) {
                cout << i << " gets pushed back" << endl;
                temp.push_back(i);
            }
            
            
            else {
                if (temp.size() == groupSizes[i]) {
                    cout << "checked size, temp is " << temp.size() << endl;
                    final.push_back(temp);
                    temp.clear();
                }
                else {
                    cout << i << " is last one to get pushed back" << endl;
                    temp.push_back(i);
                    final.push_back(temp);
                    cout << "pushed back to final" << endl;
                    temp.clear();
                }
            
            }
            
            
        }
        */
        return newFinal;
        
    }
};