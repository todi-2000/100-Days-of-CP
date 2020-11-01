// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli gcd(lli a,lli b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
void solve()
{
    //write your code here
    lli p,q;
    cin >> p >> q;
    // vector<lli>factor;
    // for(lli i=1;i*i<=p;i++)
    // {
    //     if(p%i==0){
    //     factor.push_back(i);
    //     factor.push_back(p/i);
    //     }
    // }
    if(p%q!=0)
    {
        cout << p << "\n";
        return;
    }
    else
    {
        lli val=gcd(p,q);
        for(lli i=p;i>=0;i--)
        {
            if(p%i==0)
            {
                if(i%val!=0)
                {
                    cout << i << "\n";
                    return;
                }
            }
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




