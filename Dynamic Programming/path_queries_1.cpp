// Question Link: Given a grid of size N X M, find a path from cell (1,1) to (N,M)
// which minimizes the cost in either right or down only
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
# define Inf INT_MAX
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
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=0;i<m+1;i++)
    {
        if(i==m-1)
        dp[n][i]=0;
        else
        dp[n][i]=Inf;
    }
    for(int i=0;i<n+1;i++)
    {
        if(i==n-1)
        dp[i][m]=0;
        else
        dp[i][m]=Inf;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            dp[i][j]=path[i][j]+min(dp[i+1][j],dp[i][j+1]);
        }
    }
    cout << dp[0][0] << "\n";
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




