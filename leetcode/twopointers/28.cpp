//Question: https://leetcode.com/problems/implement-strstr/
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() > haystack.size())
            return -1;
        int lenn = needle.size();
        for (int i = 0; i <= haystack.size() - lenn; i++)
        {
            if (haystack.substr(i, lenn) == needle)
                return i;
        }
        return -1;
    }
};