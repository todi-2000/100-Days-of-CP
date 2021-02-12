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
    int n,m;
    cin >> n >> m;
    vector<string>s(n);
    vector<string>t(m);
    for(int i=0;i<n;i++)
    cin >> s[i];
    for(int j=0;j<m;j++)
    cin >> t[j];
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin >> x;
        string ans="";
        x--;
        ans+=s[x%n]+t[x%m];
        // ans+=s[x%n-1];
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




