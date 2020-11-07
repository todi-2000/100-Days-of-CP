class Solution
{
public:
    int middle(int A, int B, int C)
    {
        //code here//Position this line where user code will be pasted.
        vector<int> arr(3);
        arr[0] = A, arr[1] = B, arr[2] = C;
        sort(arr.begin(), arr.end());
        return arr[1];
    }
};