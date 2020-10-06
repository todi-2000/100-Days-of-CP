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
    lli n,q;
    cin >> n >> q;
    for(lli i=0;i<q;i++)
    {
        lli x,y;
        cin >> x >> y;
        if((x+y)%2==0)
        {
            lli ans=ceil(double((x-1)*n+y)/2);
            cout << ans << "\n";
        }
        else
        {
            lli ans = ceil(double((x - 1) * n + y) / 2);
            ans += ceil(double(n * n) / 2);
            cout << ans << "\n";
        }
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




