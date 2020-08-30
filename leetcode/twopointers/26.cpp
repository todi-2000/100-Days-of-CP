//Question: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        if (arr.size() == 0)
            return 0;
        int index = 0, i = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] != arr[index])
            {
                arr[++index] = arr[i];
            }
        }
        return index + 1;
    }
};