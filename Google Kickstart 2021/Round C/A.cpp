// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli mulmod(lli b, lli p, lli m)
{
    lli x = 0, y = b % m;
    while (p > 0)
    {
        if (p % 2 == 1)
            x = (x + y) % m;
        y = (y * 2LL) % m;
        p /= 2;
    }
    return x % m;
}

lli power(lli base, lli p, lli m)
{
    lli res = 1;
    while (p != 0)
    {
        if (p % 2 != 0)
            res = mulmod(res, base, m);
        p >>= 1;
        base = mulmod(base, base, m);
    }
    return res % m;
}

void solve(int t)
{
    //write your code here
    lli n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    lli ans = 0;
    for(lli i = 0;i<ceil(float(n)/2);i++)
    {
        lli diff = s[i] - 'a';
        ans += (diff)*power(k,ceil(float(n)/2)-(i+1), mod);
    }
    // cout << ans << "\n";
    if (n == 1)
    {
        cout << "Case #" << t << ": " << s[0]-'a' << "\n";
    }
    else
    {
        for(lli i = 0; i<n/2; i++)
        {
            if(s[n-i-1] > s[i])
            {
                ans++;
                break;
            }
        }
        cout << "Case #" << t << ": " << ans << "\n";
    }
        
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




