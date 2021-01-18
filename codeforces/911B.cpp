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
    int n,a,b;
    cin >> n >> a >> b;
    if(a+b==n)
    cout << 1 << "\n";
    else
    {
        if(a>b) swap(a,b);
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            int val = b/(n-i);
            ans = max(ans,min(a/i,val));
        }
        cout << ans << "\n";
    }
    
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




