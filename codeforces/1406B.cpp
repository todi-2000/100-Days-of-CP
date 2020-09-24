// Question Link:https://codeforces.com/problemset/problem/1406/B
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef signed long long int lli;

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    vector<lli>arr(n);
    for(lli i=0;i<n;i++)
    {    
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    lli ans=1;
    lli val=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
    lli val1=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
    lli val2=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
    ans=max({val,val1,val2});
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




