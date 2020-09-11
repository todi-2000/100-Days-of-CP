class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0, ans = 0;
        for (int i = 0; i < g.size() && count < s.size(); i++)
        {
            while (count < s.size() - 1 && s[count] < g[i])
            {
                count++;
            }
            if (g[i] <= s[count])
            {
                ans++;
                count++;
            }
        }
        return ans;
    }
};