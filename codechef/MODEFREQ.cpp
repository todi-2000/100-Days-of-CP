// Question Link:https://www.codechef.com/LTIME87B/problems/MODEFREQ
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
    vector<int> freq(10);
    vector<int> count(10000);
    int ans = 0, maxi = 0;
    for (int i = 0; i < 10; i++)
        freq[i] = 0;
    for (int i = 0; i < 10000; i++)
        count[i] = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        freq[val - 1]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
            count[freq[i] - 1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (count[i] > maxi)
        {
            maxi = count[i];
            ans = i + 1;
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
