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
   string s;
   cin >> s;
   int count0=0,count1=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='o')
       count0++;
       else
       count1++;
   }
   if(count0==0)
   cout << "YES" << "\n";
   else if(count1%count0==0)
   cout <<"YES" <<"\n";
   else
   cout << "NO" << "\n";
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




