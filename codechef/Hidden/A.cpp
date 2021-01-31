// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<bool> seive(1000001, 1);

void seive_prime()
{
    int maxN = 1000000;
    seive[0] = 0;
    seive[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (seive[i])
        {
            for (int j = i * i; j <= maxN; j += i)
                seive[j] = 0;
        }
    }
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    vector<int>prime;
    for(int i=0;i<=n;i++)
    {
        if(seive[i])
        prime.push_back(i);
    }
    int ans=0;
    for(int j=1;j<prime.size();j++)
    {
        if (2 + prime[j] <= n && seive[2 + prime[j]])
        {
                ans++;
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
    seive_prime();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




