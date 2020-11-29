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
    vector<lli>c(n);
    map<lli,lli>_map;
    for(lli i=0;i<n;i++)
    {
        cin >> c[i];
        _map[c[i]]++;
    }
    lli ans1=INT_MAX;
    for(auto l:_map)
    {
    lli value=l.first,ans=0,i=0;
    while(i<n)
    {
        if(c[i]==value){
            i++;
            continue;
        } 
        else
        {
            i=i+k;
            ans++;
        }
    }
    ans1=min(ans1,ans);
    }
    cout << ans1 << "\n";
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




