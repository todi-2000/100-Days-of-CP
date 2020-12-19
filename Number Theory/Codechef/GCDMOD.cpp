// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli power(lli base, lli p, lli d)
{
    lli res = 1;
    while (p != 0)
    {
        if (p % 2 != 0)
        {
            res = ((res%d)*(base%d))%d;
            p--;
        }
        else
        {
            base = ((base%d)*(base%d))%d;
            p >>= 1 ;
        }
    }
    return res%d;
}

vector<lli> prime_factor(lli n)
{
    vector<lli> factor;
    for (int i = 1; (lli)i*i  <=n ; i++)
    {
        if(n%i==0)
        {
            factor.push_back(i);
            if((n/i)!=i)
            factor.push_back(n/i);
        }
    }
    return factor;
}

void solve()
{
    //write your code here
    lli a,b,n;
    cin >> a >> b >> n;
    if(a==b)
    {
        lli x=power(a,n,mod)%mod;
        lli y=power(b,n,mod)%mod;
        cout << (x+y)%mod << "\n";return;
    }
    else
    {
        lli diff=a-b;
        vector<lli> fac=prime_factor(diff);
        sort(fac.begin(),fac.end(),greater<lli>());
        for(int i=0;i<fac.size();i++)
        {
            lli x = (power(a, n, fac[i]))%fac[i];
            lli y = (power(b, n, fac[i]))%fac[i];
            // cout << x << " " << y << "\n";
            if((x+y)%fac[i]==0){
            cout << fac[i]%mod << "\n";return;}
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




