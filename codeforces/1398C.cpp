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
    int n,n1;
    cin >> n >> n1;
    vector<int>arr;
    while(n1>0)
    {
        arr.push_back(n1%10);
        n1/=10;
    }
    reverse(arr.begin(),arr.end());
    vector<vector<int>>dp(n,vector<int>(n));
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1){ ans++;
        dp[arr[i]][i]=1;}
        else
        {
            /* code */
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




