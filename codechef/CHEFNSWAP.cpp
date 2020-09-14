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
    lli n,ans=0;
    cin >> n;
    if(n%2==0)
    {
        if((lli(n/2))%2!=0)
        {
            cout << 0 << "\n";return;
        }
    }
    else
    {
        if((lli((n+1)/2))%2!=0){
            cout << 0 << "\n";return;
        }
    }
        lli mul = ((n* (n + 1))/2) * 4;
        lli val = (sqrt(mul + 1) - 1) / 2;
        ans = n - val;
        if (sqrt(mul + 1) == lli(sqrt(mul + 1)))
        {
            lli x = ((val * (val - 1)) / 2) + (((n - val) * (n - val - 1)) / 2);
            ans += x;
        }
    cout << ans << "\n";
    
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




