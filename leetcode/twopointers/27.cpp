//Question: https://leetcode.com/problems/remove-element/
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 0)
            return 0;
        int first = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[first] = nums[i];
                first++;
            }
        }
        return first++;
    }
};