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
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    lli ma=*max_element(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        arr[i]=ma-arr[i];
        if(k%2!=0)
        cout << arr[i] << " ";
    }
    if(k%2==0)
    {
        lli ma = *max_element(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            arr[i] = ma - arr[i];
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
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




