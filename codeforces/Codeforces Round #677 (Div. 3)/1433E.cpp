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
   lli val = 1;
   for(int i=n/2+1;i<n+1;i++)
   {
       val *= i;
   }
   for(int i=1;i<n/2+1;i++)
   {
       val /= i;
   }
   val /= 2;
   lli fac = 1;
//    cout << val << " ";
   for (int i = 1; i < n / 2; i++)
   {
       fac *= i;
   }
   cout << val * fac * fac << "\n";
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




