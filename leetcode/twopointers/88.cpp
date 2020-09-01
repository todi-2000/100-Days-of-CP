//Question: https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>array;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                array.push_back(nums1[i]);
                    i++;
            }
            else if(nums1[i]>nums2[j])
            {
                array.push_back(nums2[j]);
                    j++;
            }
        }
        while(i<m)
        {
            array.push_back(nums[i]);
            i++;
        }
        while(j<n)
        {
            array.push_back(nums[j]);
            j++;
        }
        for(int x=0;x<m+n;x++)nums[x]=array[x];
    }
};