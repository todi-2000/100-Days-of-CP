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
    cin >> n>>x;
    vector<lli>arr(n);
    lli mi=0,ma=0;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
        mi+=ceil(double(arr[i])/x);
        ma+=arr[i];
    }
    ma=ceil(double(ma)/x);
    if(mi>ma)
    swap(mi,ma);
    cout << mi << " " << ma << "\n";
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




