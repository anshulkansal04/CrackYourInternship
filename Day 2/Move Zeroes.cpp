/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zer = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                nums[zer++] = nums[i];
            }
        }

        for (int i = zer; i < n; ++i) {
            nums[i] = 0;
        }
    }
};