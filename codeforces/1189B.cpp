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
    int n;
    cin >> n;
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    if(arr[n-1]>=arr[n-2]+arr[n-3])
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
        cout << arr[n-3] << " ";
        for(int i=0;i<n;i++)
        {
            if(i!=n-3)
            cout << arr[i] << " ";
        }
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




