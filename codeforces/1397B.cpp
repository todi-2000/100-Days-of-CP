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
    vector<lli>a(n);
    lli c=1;
    for(int i=0;i<n;i++)
        cin >> a[i];
    lli ans=LONG_LONG_MAX;
    sort(a.begin(),a.end());
    while(pow(c,n-1)<LONG_LONG_MAX)
    {
        lli val=0;
        for (int i = 0; i < n; i++)
        {
            lli power=pow(c,i);
            val+=abs(a[i]-power);
        }
        ans=min(ans,val);
        c++;
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




