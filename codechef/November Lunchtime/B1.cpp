// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

bool sortcol(const vector<lli> &v1,
             const vector<lli> &v2)
{
    return v1[1] < v2[1];
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    vector<pair<lli,lli>>cf(n);
    for (int i = 0; i < n; i++)
        cin >> cf[i].second;
    for (int i = 0; i < n; i++)
        cin >> cf[i].first;
    sort(cf.begin(), cf.end());
    lli x = n, ans=0;
    for (int i = 0; i < n && x > 0; i++)
    {
        if (cf[i].second > x)
        {
            ans += (cf[i].first * x);
            x-=cf[i].first;
        }
        else
        {
            ans += (cf[i].first * cf[i].second);
            x -= cf[i].second;
        }
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
