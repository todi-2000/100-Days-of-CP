// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli mulmod(lli b,lli p,lli m)
{
    lli x=0,y=b%m;
    while(p>0)
    {
        if(p%2==1)
            x=(x+y)%m;
        y=(y*2LL)%m;
        p/=2;
    }
    return x%m;
}


lli power(lli base,lli p,lli m)
{
    lli res=1;
    while (p != 0)
    {
        if (p % 2 != 0)
            res = mulmod(res,base,m);
        p >>= 1;
        base = mulmod(base,base,m);
    }
    return res%m;
}

void solve()
{
   //write your code here
   lli n;
   cin >> n;
   if (n < 4)
    {
        cout << "YES" << "\n";return;
    }
   for(int i=0;i<5;i++)
   {
       lli a = 2+(rand()%(n-3));
       lli res = power(a,n-1,n);
       if(res!=1)
       {
           cout << "NO" << "\n";
           return;
       }
   }
   cout << "YES" << "\n";
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




