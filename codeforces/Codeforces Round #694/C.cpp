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
    lli n,m;
    cin >> n >> m;
    vector<lli>k(n),c(m);
    for(lli i=0;i<n;i++)
    cin >> k[i];
    for(lli j=0;j<m;j++)
    cin >> c[j];
    sort(k.begin(),k.end(),greater<lli>());
    lli sum=0;
    lli start=1;
    for(lli i=0;i<n;i++)
    {
        if(k[i]>start)
        {
            sum+=c[start-1];
            start++;
        }
        else
        sum+=c[k[i]-1];
    }
    cout << sum << "\n";
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




