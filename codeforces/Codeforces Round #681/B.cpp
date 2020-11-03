// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    lli a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    lli count = INT_MAX, ans=0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            ans += min(a, b * count);
            count = 0;
        }
        else
        {
            count++;
        }
    }

    cout << ans << endl;
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
    while(t--)
    {
        solve();
    }
    return 0;
}




