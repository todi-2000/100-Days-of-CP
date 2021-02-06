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
   int n,t;
   cin >> n >> t;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   cin >> arr[i];
   int ans=0,i=0;
   while(t>0 && i<n)
   {
       int time=(86400-arr[i]);
       t-=max(0,time);
       i++;
   }
   if(t>0)
   {
       i+=ceil(double(t)/86400);
   }
   cout << i << "\n";
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




