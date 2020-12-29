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
    vector<int> r(n);
    int sum = 0, mar = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
        sum += r[i];
        mar = max(mar, sum);
    }
    int m;
    cin >> m;
    vector<int> b(m);
    int sum1 = 0, mab = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sum1 += b[i];
        mab = max(mab, sum1);
    }
    cout << max(0, mar + mab) << "\n";
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
