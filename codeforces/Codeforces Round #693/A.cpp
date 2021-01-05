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
    lli w,h,n;
    cin >> w >> h >> n;
    lli ans=1;
    while(w%2==0 || h%2==0)
    {
        if(w%2==0)
        {
            ans*=2;
            w/=2;
        }
        if(h%2==0)
        {
            ans*=2;
            h/=2;
        }
        if(ans>=n)
        break;
    }
    if(ans>=n)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
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




