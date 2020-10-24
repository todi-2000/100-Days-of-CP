// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli factorial(lli n) 
{ 
    lli res = 1, i; 
    for (i = 2; i <= n; i++) 
        res= (res*i)%mod; 
    return res; 
} 

void solve()
{
    //write your code here
    lli n,x,pos;
    cin >> n >> x >> pos;
    lli scount=x-1,bcount=n-x;
    lli ans=1;
    lli mid=n/2,left=0,right=n;
    while(left<right)
    {
        if(mid<pos)
        {
            ans=(ans*scount)%mod;
            scount--;
            left=mid+1;
        }
        else
        {
            ans=(ans*bcount)%mod;
            bcount--;
            right=mid;
        }
        mid=(left+right)/2;
    } 
    ans=(ans*factorial(scount+bcount))%mod;
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




