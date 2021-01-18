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
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    lli maxk = arr[n-1]+m, val=0;
    for(int i=0;i<n-1;i++)
    {
        val+=(arr[n-1]-arr[i]);
    }
    // if(val==0)
    //     cout << arr[n - 1] + ceil(double(m) / n) << " " << maxk << "\n";
    if(val<=m)
    cout << arr[n-1]+ceil(double(m-val)/n) << " " << maxk << "\n";
    else
    {
        cout << arr[n-1] << " " << maxk << "\n";
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




