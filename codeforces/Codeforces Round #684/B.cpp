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
    lli n,k;
    cin >> n >> k;
    vector<lli>arr(n*k);
    for(lli i=0;i<n*k;i++)
    cin >> arr[i];
    lli pos=ceil(double(n)/2);
    lli rem=n-pos+1;
    lli first=n-rem,ans=0,val=n*k;
    // cout << pos << " " << rem << " ";
    while(k>0)
    {
        ans+=arr[val-rem];
        val-=rem;
        k--;
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




