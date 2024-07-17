/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/3sum/
*/

class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n = cp.size();
        int lsum = 0;
        for(int i=0;i<k;i++)
        {
            lsum += cp[i];
        }
        int maxsum = lsum;
        int rsum =0;
        int rind = n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum -= cp[i];
            rsum += cp[rind];
            rind--;
            maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};