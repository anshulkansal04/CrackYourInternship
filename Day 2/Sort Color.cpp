/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/sort-colors/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0;
        int n = nums.size();
        for(int num : nums) {
            if(num == 0) z++;
            else if(num == 1) o++;
        }  

        for(int i = 0; i < z; ++i) {
            nums[i] = 0;
        }

        for(int i = z; i < z + o; ++i) {
            nums[i] = 1;
        }

        for(int i = z + o; i < n; ++i) {
            nums[i] = 2;
        }
    }
};