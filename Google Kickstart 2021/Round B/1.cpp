// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
   //write your code here
   int n;
   string s;
   cin >> n >> s;
   vector<int>ans;
   ans.push_back(1);
   for(int i=1;i<n;i++)
   {
       if(s[i]>s[i-1])
       ans.push_back(ans[ans.size()-1]+1);
       else
       {
           ans.push_back(1);
       }
   }
   cout << "Case #" << t << ": ";
   for(int i=0;i<ans.size();i++)
   cout << ans[i] << " ";
   cout << "\n";
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
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}




