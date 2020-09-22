// Question: Given a grid of size NXM, from any cell of first row one should reach at any cell of last row 
// which minimzes the cost. 
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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>path(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> path[i][j];
    vector<vector<int>>dp(n,vector<int>(m));
    for(int i=0;i<m;i++)
        dp[n-1][i]=path[n-1][i];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            vector<int>mi;
            if(j-1>=0) mi.push_back(dp[i+1][j-1]);
            if(j+1<m) mi.push_back(dp[i+1][j+1]);
            mi.push_back(dp[i+1][j]);
            int val = *min_element(mi.begin(),mi.end());
            dp[i][j]=path[i][j]+val;
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<m;i++)
    {
        if(dp[0][i]<ans)
            ans=dp[0][i];
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




