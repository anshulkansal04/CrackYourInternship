/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/set-matrix-zeroes/
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int* row = new int[n];
        int* col = new int[m];
        
        for(int i= 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    
                    col[j] = 1;
                }
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j< m ; j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};