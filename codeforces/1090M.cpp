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
   int n, k;
   cin >> n >> k;
   vector<lli>arr(n);
   for(int i=0;i<n;i++)
   cin >> arr[i];
   int ans = 0, count=1;
   for(int i=1;i<n;i++)
   {
       if(arr[i]!=arr[i-1])
       count++;
       else
       {
           ans = max(ans,count);
           count = 1;
       }
   }
   ans = max(ans, count);
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




