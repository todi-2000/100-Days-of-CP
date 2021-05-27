// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
    //write your code here
    lli g;
    cin >> g;
    lli ans = 0;
    for (lli i = 1; i * (i + 1) < 2 * g; i++)
    {
        double a = (1.0 * g - (i * (i + 1)) / 2) / (i + 1);
        if (a - (lli)a == 0.0)
            ans++;
    }
    cout << "Case #" << t << ": " << ans+1 << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}




