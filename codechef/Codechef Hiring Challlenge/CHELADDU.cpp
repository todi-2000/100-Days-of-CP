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
    vector<lli>size(n);
    for(lli i=0;i<n;i++)
    cin >> size[i];
    sort(size.begin(),size.end());
    int diff=INT_MAX;
    for(int i=0;i<=n-k;i++)
    {
        int d=size[i+k-1]-size[i];
        diff=min(d,diff);
    }
    cout << diff << "\n";
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




