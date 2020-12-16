// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

lli power(lli base, lli p,lli z)
{
    lli res = 1;
    while (p != 0)
    {
        if (p % 2 != 0)
        {
            res = (res*base)%z;
            p--;
        }
        else
        {
            base = (base*base)%z;
            p /= 2;
        }
    }
    return res;
}

void solve()
{
    //write your code here
    int b, p;
    cin >> b >> p;
    cout << power(b, p,mod) << "\n";
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
