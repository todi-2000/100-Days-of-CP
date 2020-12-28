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
   string s;
   cin >> s;
   int ans=0,count=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='x')
       count++;
       else
       {
           ans+=max(0,count-2);
           count=0;
       }   
   }
   ans += max(0, count - 2);
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




