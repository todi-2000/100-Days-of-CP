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
   string s;
   cin >> n >> s;
   stack<char>sr;
   for(int i=0;i<n;i++)
   {
       if(s[i]!='-')
       sr.push(s[i]);
   }
   if(sr.empty())
   {
       cout << n << "\n";return;
   }
   char ch=sr.top();sr.pop();
   int count=0;
   while(!sr.empty())
   {
       if(sr.top()!=ch)
       {
           if(sr.size()==n-1)
           {
               cout << 0 << "\n";return;
           }
           else
           {
               cout << n-sr.size() << "\n";return;
           }
       }
       else sr.pop();
   }
   cout << n << "\n";
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




