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
   int y,b,r;
   cin >> y >> b >> r;
   int ans=0;
   if(y+1<=b && y+2 <=r)
   ans=max(ans,y+y+1+y+2);
   if(b-1<=y && b+1<=r)
   ans=max(ans,b+b-1+b+1);
   if(r-2<=y && r-1<=b)
   ans=max(ans,r+r-1+r-2);
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




