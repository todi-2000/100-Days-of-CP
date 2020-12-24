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
   int n;
   cin >> n;
   vector<pair<int,int>>arr(n);
   for(int i=0;i<n;i++)
   cin >> arr[i].first >> arr[i].second ;
   for(int i=0;i<n;i++)
   {
       if(i-1>=0 && (arr[i].first<arr[i-1].first || arr[i].second<arr[i-1].second))
       {
           cout << "NO" << "\n";
           return;
       }
       else if (i-1>=0 && arr[i].first-arr[i-1].first<arr[i].second-arr[i-1].second)
       {
           cout << "NO" << "\n";return;
       }
       else if(arr[i].first<arr[i].second)
       {
            cout << "NO"
                 << "\n";
            return;
       }
   }
   cout << "YES" << "\n";
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




