// Question:  subset sum problem using dynamic programming in O(N* M) time & O(N*M) space
// Question Link:
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
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    lli sum;
    cin >> sum;
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0 && j==0) dp[i][j]=true;
            else if(i==0) dp[i][j]=false;
            else
            {
                if (j < arr[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                {
                    if(dp[i-1][j]==true) dp[i][j]=dp[i-1][j];
                    else
                    {
                        dp[i][j]=dp[i-1][j-arr[i-1]];
                    }
                } 
            }
        }
    }
    if(dp[n][sum]==true) cout << "True";
    else
    {
        cout << "False";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




