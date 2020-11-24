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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> narr;
    map<int, int> _map;
    narr.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != narr[narr.size() - 1])
            narr.push_back(arr[i]);
    }
    for (int i = 0; i < narr.size(); i++)
    {
        if (i == 0 || i == narr.size() - 1)
        {
            if (_map[narr[i]] == 0)
                _map[narr[i]] += 1;
        }
        else
        {
            if (_map[narr[i]] != 0)
                _map[narr[i]] += 1;
            else
                _map[narr[i]] += 2;
        }
    }
    // for(int i=0;i<narr.size();i++)
    // cout << narr[i] << " ";
    if (narr.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }
    int ans = INT_MAX;
    for (auto i : _map)
    {
        ans = min(ans, i.second);
    }
    cout << ans << "\n";
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
