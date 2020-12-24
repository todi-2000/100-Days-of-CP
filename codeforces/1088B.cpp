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
   int n,k;
   cin >> n >> k;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   cin >> arr[i];
   sort(arr.begin(),arr.end());
   int sum=0;
   for(int i=0;i<n && k>0;i++)
   {
       if(arr[i]-sum==0)
       continue;
       cout << arr[i]-sum << "\n";
       sum+=(arr[i]-sum);
       k--;
   }
   while(k>0)
   {
       cout << 0 << "\n";
       k--;
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




