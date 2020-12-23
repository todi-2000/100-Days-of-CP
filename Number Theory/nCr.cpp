// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<lli>F(1000001);
void factorial()
{
    F[0]=1;F[1]=1;
    for (int i = 2; i <= 1000000; i++)
    {
        F[i]=(F[i-1]*1LL*i)%mod;
    }
}

lli power(lli n, lli p)
{
    lli res=1;
    while(p)
    {
        if(p%2)
        {
            res=(res*1LL*n)%mod;
            p--;
        }
        else
        {
            n=(n*1LL*n)%mod;
            p/=2;
        }
    }
    return res;
}

lli C(lli n,lli k)
{
    if(k>n) return 0;
    else
    {
        lli res=1;
        res=(res*F[n]);
        res=(res*power(F[k],mod-2))%mod;
        res=(res*power(F[n-k],mod-2))%mod;
        return res;
    }
    
}

void solve()
{
   //write your code here
   lli n,k;
   cin >> n >> k;
   cout << C(n,k)%mod << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




