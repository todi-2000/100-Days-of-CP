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
    lli n;
    cin >> n;
    vector<lli>arr(n);
    lli val=0;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<lli>dp(n);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]+i>n-1)
        dp[i]=arr[i];
        else
        dp[i]=arr[i]+dp[i+arr[i]];
    }
    cout << *max_element(dp.begin(),dp.end()) << "\n";
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




