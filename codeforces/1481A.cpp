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
   int x,y;
   cin >> x >> y;
   string s;
   cin >> s;
   int l=0,r=0,u=0,d=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='U')
       u++;
       else if(s[i]=='D')
       d++;
       else if(s[i]=='R')
       r++;
       else
       {
           l++;
       }
   }
   if(x>=0 && y>=0)
   {
       if(x<=r && y<=u)
       cout << "YES" << "\n";
       else
       {
           cout << "NO" << "\n";
       }
       
   }
   else if (x <= 0 && y <= 0)
   {
       if (abs(x) <= l && abs(y) <= d)
           cout << "YES"
                << "\n";
       else
       {
           cout << "NO"
                << "\n";
       }
   }
   else if (x >= 0 && y <= 0)
   {
       if (x <= r && abs(y) <= d)
           cout << "YES"
                << "\n";
       else
       {
           cout << "NO"
                << "\n";
       }
   }
   else if (x <= 0 && y >= 0)
   {
       if (abs(x) <= l && y <= u)
           cout << "YES"
                << "\n";
       else
       {
           cout << "NO"
                << "\n";
       }
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





