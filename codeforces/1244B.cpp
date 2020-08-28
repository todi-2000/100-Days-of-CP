// Question Link:https://codeforces.com/problemset/problem/1244/B
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
   int n,l=0,r=0;
   cin >> n;
   string s;
   cin >> s;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='1')
       {
           l=i+1;
           break;
       }
   }
   for(int i=n-1;i>=0;i--)
   {
       if(s[i]=='1')
       {
           r=i;
           break;
       }
   }
   if(l==0){cout << n << "\n";return;}
   int ans=2*(n-min(l-1,n-r-1));
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




