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
   int n,m;
   cin >>n >> m;
   vector<int>arr(n);
   vector<int>arr1(m);
   int ans=0;
   for(int i=0;i<n;i++)
   {
       cin >> arr[i];
   }
   for(int i=0;i<m;i++)
   cin >> arr1[i];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[i]==arr1[j])
           ans++;
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



