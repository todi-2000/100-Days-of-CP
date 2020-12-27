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
    vector<int>arr(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        b[i]=arr[i];
    }
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==0)
        {
            if(i-1>=0 && i+1<=n-1 && b[i-1]==1 && b[i+1]==1)
            {
                b[i+1]=0;
                ans++;
            }
        }
    }
    cout << ans << "\n";
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




