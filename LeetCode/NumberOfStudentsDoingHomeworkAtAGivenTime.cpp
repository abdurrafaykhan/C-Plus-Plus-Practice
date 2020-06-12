class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        // Initialize variable counting students doing work in query time
        int studentCount = 0;
        
        // Goes through all students and increments count by 1 if working in query time
        for (int i = 0; i < startTime.size(); i++) {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
                studentCount = studentCount + 1;
            }
        }
        
        // Returns count of students doing work in query time
        return studentCount;
    }
};