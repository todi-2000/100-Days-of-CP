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
    vector<lli>arr(k);
    for(lli i=0;i<k;i++)
    cin >> arr[i];
    lli pos=-1, mi = LONG_LONG_MAX;
    for(lli i=0;i<k;i++)
    {
        if(mi>(n%arr[i]))
        {
            mi = n%arr[i];
            pos=i;
        }
    }
    cout << pos+1 << " " << lli(n/arr[pos]) << "\n";
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




