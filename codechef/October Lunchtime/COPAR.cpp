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
    lli pr=1;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
        pr*=arr[i];
    }
    lli prev=arr[0];
    lli suff=pr/prev;
    lli ans=1;
    lli x,y;
    while(__gcd(prev,suff)!=1 && ans<n)
    {
        prev*=arr[ans];
        suff=pr/prev;
        ans++;
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




