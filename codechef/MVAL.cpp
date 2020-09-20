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
    vector<lli>a(n);
    vector<lli>fr(n);
    vector<lli>ba(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    fr[0]=a[0];
    ba[n-1]=a[n-1];
    for(int i=1;i<n;i++)
        fr[i]=max(fr[i-1]+a[i],a[i]);
    
    
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




