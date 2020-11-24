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
    lli n, k;
    cin >> n;
    k = n;
    map<lli, lli> _map;
    while (n % 2 == 0)
    {
        _map[2] += 1;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            _map[i] += 1;
            n = n / i;
        }
    }
    if (n > 2)
        _map[n] += 1;
    lli ans = 0, val;
    for (auto x : _map)
    {
        if (x.second > ans)
        {
            ans = x.second;
            val = x.first;
        }
    }
    cout << ans << "\n";
    for (lli i = 0; i < ans - 1; i++)
    {
        cout << val << " ";
    }
    if (ans == 1)
        cout << k << "\n";
    else
        cout << k / ((lli)(pow(val, (ans - 1)))) << "\n";
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
