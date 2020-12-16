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
   int l,r;
   cin >> l >> r;
   for(int i=l;i<=r;i++)
   {
       int flag=0;
       for(int j=2;j*j<=i;j++)
       {
           if(i%j==0)
           {
               flag=1;break;
           }
       }
       if(flag==0 && i!=1)
       {
           cout << i << " ";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




