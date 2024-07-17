class Solution {
public:
    int subarraySum(vector<int>& nums, int tar) {
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int sum =0;
            for(int j=i;j<n;j++)
            {
                sum += nums[j];
                if(sum == tar)
                    c++;
            }
        }
        return c;
    }
};