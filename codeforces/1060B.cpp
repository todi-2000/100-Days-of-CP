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
    lli n;
    cin >> n;
    lli l=0,x=n/10;
    lli val=0;
    while(x>0)
    {
        x/=10;
        l++;
        val=val*10+9;
    }
    lli ans=l*9;
    val=n-val;
    while(val>0)
    {
        ans+=(val%10);
        val/=10;
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




