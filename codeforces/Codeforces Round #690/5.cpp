// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli C(lli n, lli r)
{
    if(n<r)
    {
        return 0;
    }
    if (r > n - r)
        r = n - r;
    long long ans = 1;
    int i;
    for (i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}

void solve()
{
   //write your code here
   lli n;
   cin >> n;
   vector<lli>arr(n);
   map<lli,lli>_map;
   for(lli i=0;i<n;i++)
   {
       cin>> arr[i];
       _map[arr[i]]++;
   }
   lli ma=*max_element(arr.begin(),arr.end());
   lli ans=0;
   for(int i=1;i<=ma;i++)
   {
       lli fcount=_map[i];
       lli scount = _map[i+1]+_map[i+2];
    //    cout << ans << " ";
       ans += C(fcount, 3) + (C(fcount, 2) * C(scount, 1)) + (C(fcount, 1) * C(scount, 2));
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




