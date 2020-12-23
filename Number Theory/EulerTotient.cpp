// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli eulertotient(lli n)
{
    int res=n;   
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res/=i;
            res*=(i-1);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if (n > 1)
    {
        res/=n;
        res*=(n-1);
    }
    return res;
}


void solve()
{
    //write your code here
    lli n;
    cin >> n;
    int ans=eulertotient(n);
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




