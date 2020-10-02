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
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int>dp;
    int odd=0,even=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        {
            odd++;
        }
        if (odd == even && i!=n-1)
        {
            dp.push_back(abs(arr[i+1]-arr[i]));  
        }
    }
    sort(dp.begin(),dp.end());
    for(int i=0;i<dp.size()&&dp[i]<=k;i++)
    {
        ans++;
        k-=dp[i];
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




