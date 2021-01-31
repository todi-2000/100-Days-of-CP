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
    lli a,b,c,n;
    cin >> a >> b >> c >> n;
    vector<lli>arr={a,b,c};
    sort(arr.begin(),arr.end());
    lli x1=max(lli(0),arr[2]-arr[0]);
    n-=(arr[2]-arr[0]);
    lli x2=arr[2]-arr[1];
    n -= (arr[2] - arr[1]);
    if(n<0)
    {
        cout << "NO" << "\n";
        return;
    }
    if(n%3==0)
    cout << "YES" << "\n";
    else
    {
        cout << "NO" << "\n";
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




