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
   lli count=0,sum=0;
   map<lli,lli>_map;
   _map[0]=1;
   for(lli i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       if(_map[sum])
       {
           count++;
           _map[sum+LONG_MAX]++;
           _map[sum-arr[i]+LONG_MAX]++;
           sum+=LONG_MAX;
       }
       else
       {
           _map[sum]++;
       }
   }
   cout << count << "\n";
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




