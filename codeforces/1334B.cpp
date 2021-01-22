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
    lli n, x;
    cin >> n >> x;
    vector<lli>arr(n);
    lli sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    if((double(sum)/n)>=x)
    {
        cout << n << "\n";
        return;
    }
    lli l=n-1;
    for(int i=0;i<n && l>0;i++)
    {   
        if((double(sum-arr[i]))/l>=x)
        {
            cout << l << "\n";
            return;
        }
        sum -= arr[i];
        l--;
    }
    cout << 0 << "\n";
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




