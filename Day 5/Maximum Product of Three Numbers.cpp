/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/add-binary/
*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int prod = nums[n-1]*nums[n-2]*nums[n-3];
        int alt = nums[0]*nums[1]*nums[n-1];
        return max(prod,alt);
    }
};