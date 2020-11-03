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
    vector<vector<lli>>arr(n+1,vector<lli>(2));
    for(int i=0;i<n;i++)
        cin>> arr[i][0];
    for(int i=0;i<n;i++)
        cin >> arr[i][1];
    arr[n][1]=0,arr[n][0]=0;
    sort(arr.begin(),arr.end(),greater< >());
    vector<lli>sum(n);
    sum[0]=arr[0][1];
    for(int i=1;i<n;i++)
        sum[i]=arr[i][1]+sum[i-1];
    lli ans=arr[0][0];
    for(int i=0;i<n;i++)
    {
        ans=min(ans,max(arr[i+1][0],sum[i]));
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




