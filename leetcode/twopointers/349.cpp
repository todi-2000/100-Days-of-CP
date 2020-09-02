// Question Link: https://leetcode.com/problems/intersection-of-two-arrays/
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        set<int> intersection;
        vector<int> ans;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                intersection.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        for (auto s : intersection)
            ans.push_back(s);
        return ans;
    }
};