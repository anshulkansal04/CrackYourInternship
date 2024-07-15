/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int x = target - num;
            if (mpp.find(x) != mpp.end()) {
                return {mpp[x], i};
            }
            mpp[num] = i;
        }
        return { -1, -1};
    }
};