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
    if(n==1)
    {
        cout << n << "\n";return;
    }
    if(log2(n)==int(log2(n)))
    {
        cout << -1 << "\n";
        return;
    }
    vector<int>ans(n);
    for(int i=1;i<=n;i++)
        ans[i-1]=i;
    for(int i=0;i<=(int)log2(n);i++)
    {
        swap(ans[pow(2, i) - 1], ans[pow(2, i)]);
    }
    for(int i=0;i<n;i++)
    cout << ans[i] << " ";
    cout << "\n";
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




