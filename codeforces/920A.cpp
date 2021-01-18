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
    int n, k;
    cin >> n >> k;
    vector<int>arr(k);
    for(int i=0;i<k;i++)
    {
        cin >> arr[i];
    }
    int ans=0;
    ans = max(ans,arr[0]-1);
    ans = max(ans,n-arr[k-1]);
    for(int i=1;i<k;i++)
    {
        ans = max(ans,(arr[i]-arr[i-1])/2);
    }
    cout << ans+1 << "\n";
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




