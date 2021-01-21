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
   lli a,b,x,y;
   cin >> a >> b >> x >> y;
   lli ans =0;
   ans = max(ans, (y-0)*a);
   ans = max(ans, (b-1-y)*a);
    ans = max(ans,(x-0)*b);
    ans = max(ans,(a-1-x)*b);
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




