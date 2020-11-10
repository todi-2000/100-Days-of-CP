class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = INT_MIN;
        int first = 0, last = height.size() - 1;
        while (first <= last)
        {
            int x = min(height[first], height[last]) * (last - first);
            if (x > area)
                area = x;
            if (height[first] < height[last])
                first++;
            else
                last--;
        }
        return area;
    }
};