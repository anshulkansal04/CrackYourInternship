/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
*/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length();
        int m = needle.length();
        if (m == 0)
            return 0;
        for (int i = 0; i < n; i++)
        {
            bool ans = true;
            if (haystack[i] == needle[0])
            {
                for (int j = 0; j < m; j++)
                {
                    if (haystack[j + i] != needle[j])
                    {
                        ans = false;
                        break;
                    }
                }
                if (ans)
                    return i;
            }
        }
        return -1;
    }
};