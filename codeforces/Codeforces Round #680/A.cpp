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
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(a[i]+b[i]>x)
        {
            cout << "NO" << "\n";return;
        }
    } 
    cout << "YES" << "\n";
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




