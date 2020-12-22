// Question: Total No. of Divisors of prime factorization of N
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<int>countfactor(int n)
{
    vector<int> factor;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int l=0;
            while (n % i == 0)
            {
                l++;
                n/=i;
            }
            factor.push_back(l);
        }
    }
    if (n > 1)
    {
        factor.push_back(1);
    }
    return factor;
}

void solve()
{
   //write your code here
   int N;
   cin >> N;
    vector<int>c=countfactor(N);
    lli ans=1;
    for(int i=0;i<c.size();i++)
    ans*=(c[i]+1);
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




