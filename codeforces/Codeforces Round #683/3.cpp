// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    lli n, W;
    cin >> n >> W;
    lli half = ceil(double(W) / 2);
    vector<lli> arr(n);
    vector<bool> ind(n);
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
        ind[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= half && arr[i] <= W)
        {
            cout << 1 << "\n";
            cout << i + 1 << "\n";
            return;
        }
        else if(arr[i]<W)
        {
            ind[i] = 1;
        }
    }
    vector<lli> ans;
    lli sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (ind[i] == 1)
        {
            sum += arr[i];
            ans.push_back(i + 1);
            if (sum >= half && sum <= W)
            {
                break;
            }
        }
    }
    if (sum < half || sum > W)
        cout << -1 << "\n";
    else
    {
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("A:/c++/inputf.in", "r", stdin);
    freopen("A:/c++/outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
