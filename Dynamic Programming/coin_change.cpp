//Question: given different coins of different denomination and a sum , you have to tell the minimum number of coins needed to make that total sum or state that it is not possible.
// Time Complexity: O(N*M) & Space Complexity: O(N*M)
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
    int n;
    cin >> n;
    vector<lli>coins(n);
    for(int i=0;i<n;i++)
        cin>> coins[i];
    lli sum;
    cin >> sum;
    vector<lli>dp(sum+1,1000000000);
    dp[0]=0;
    lli ans=1000000000;
    for(int i=1;i<sum+1;i++)
    {
        ans=1000000000;
        for(int j=0;j<n;j++)
        {
            if((i-coins[j])>=0)
                ans=min(ans,dp[(i-coins[j])]);
        }
        dp[i]=ans+1;
    }
    if (dp[sum] >= 1000000000) cout << -1 << "\n";
    else cout << dp[sum] << '\n';
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




