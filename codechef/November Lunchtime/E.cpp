// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

void solve()
{
   //write your code here
   int N;
   cin >> N;
   lli ans=N-1;
   for(int i=1;i<=N;i++)
   {
       for(int j=i+2;j<=N;j++)
       {
           lli num=i*(j+1);
           lli deno=(i+1)*j;
           if(deno-num!=1){
               lli x = num % (j - i);
               lli y = deno % (j - i);
               if (x == 0 && y == 0){
                   x = num / (j - i);
               y = deno / (j - i);}
               if(y-x==1)
               ans++;
           }
       }
   }
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




