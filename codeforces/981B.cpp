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
    vector<pair<lli,lli>>arr;
    for(int i=0;i<n;i++)
    {
        lli x,y;
        cin >> x >> y;
        arr.push_back({x,y});
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        lli x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(),arr.end());
    lli ans=0;
    for(int i=0;i<n+m-1;i++)
    {
        if(arr[i].first==arr[i+1].first){
        ans+=max(arr[i].second,arr[i+1].second);i++;}
        else
        ans+=arr[i].second;
    }
    if(arr[n+m-1].first!=arr[n+m-2].first)
    ans+=arr[n+m-1].second;
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




