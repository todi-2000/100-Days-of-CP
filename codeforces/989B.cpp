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
   int n,p;
   cin >>n >> p;
   string s;
   cin >> s;
   int count=0;
   for(int i=0;i<n-p;i++)
   {
       if(s[i]==s[i+p] && s[i]!='.')
       {
           count++;
       }
       else
       {
           if(s[i]=='.')
            {
                if(s[i+p]=='1')
                s[i]='0';
                else if(s[i+p]='0')
                s[i]='1';
                else if(s[i+p]=='.')
                {
                    s[i+p]='0';
                    s[i]='1';
                }
            }
            else if(s[i+p]=='.')
            {
                if (s[i] == '1')
                    s[i+p] = '0';
                else if (s[i] = '0')
                    s[i+p] = '1';
                else if (s[i] == '.')
                {
                    s[i + p] = '0';
                    s[i] = '1';
                }
            }
       }
   }
   if(count==n-p)
   {
       cout << "No" << "\n";
       return;
   }
   for(int i=0;i<n;i++)
   {
       if(s[i]=='.')
       s[i]='0';
   }
   cout << s << "\n";
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




