int kthSmallest(int arr[], int l, int r, int k)
{
    //code here
    vector<bool> count(100000, 0);
    for (int i = 0; i <= (r - l); i++)
    {
        count[arr[i]] = 1;
    }
    int i = 1, z = 1;
    for (; i < 100000; i++)
    {
        if (count[i] == 1)
        {
            k--;
            if (k == 0)
            {
                z = i;
                break;
            }
        }
    }
    return z;
}