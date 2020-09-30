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
   int count=0;
   if(n==1 && s[0]=='0')
   {
       cout << "No" << "\n";return;
   }
   if(n>=2 && ((s[0]=='0' && s[1]=='0') || (s[n-2]=='0' &&s[n-1]=='0')))
   {
       cout << "No" ;
       return;
   }
   for(int i=0;i<n-1;i++)
   {
       if(s[i]==s[i+1] && s[i]=='1')
       {
           cout << "No" << "\n";
           return;
       }
       if(s[i]=='1')
       count++;
   }
   for(int i=0;i<n-2;i++)
   {
       if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0')
       {
           cout << "No" << "\n";
           return;
       }
   }
   cout << "Yes" <<'\n';
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




