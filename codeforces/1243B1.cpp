// Question Link: https://codeforces.com/problemset/problem/1243/B1
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
   int n,count=0;
   cin >> n;
   string s1,s2;
   cin >> s1 >> s2;
   vector<int>val;
   for(int i=0;i<n;i++)
   {
       if(s1[i]!=s2[i])
       {
           val.push_back(i);
           count++;
       }
   }
   if(count==0){cout << "YES" << "\n";return;}
   if(val.size()!=2)
   {
       cout << "NO" << "\n";return;
   }
   else{
       if(s1[val[0]]==s1[val[1]] && s2[val[0]]==s2[val[1]])
       {
           cout <<"YES" <<"\n";
       }
       else
       cout << "NO" << "\n";
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}





