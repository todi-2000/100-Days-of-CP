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
   vector<lli>arr(n);
   map<lli,lli>_map;
   for(lli i=0;i<n;i++)
   {
       cin>> arr[i];
       _map[arr[i]]++;
   }
   lli ans=0;
   for(int i=1;i<=n-2;i++)
   {
       lli tc=_map[i]+_map[i+1]+_map[i+2];
       lli two = _map[i+1] + _map[i+2];
       if(tc>=3)
       {
           lli val=((tc*(tc-1)*(tc-2))/6);
           ans+=val;
       }
       if(two>=3)
       {
           lli val = ((two * (two - 1) * (two - 2)) / 6);
           ans -= val;
       }
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




