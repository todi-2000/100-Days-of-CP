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
    lli n,b,w;
    cin >> n >> w >> b;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int l = 0, r = n-1;
    lli ans = 0;
    while(l<=r)
    {
        if(arr[l] == arr[r])
        {
            if(arr[l] == 2)
            {
                if(l!=r)
                    ans += (min(b, w) * 2);
                else
                    ans += min(b, w);
            }
            
        }
        else
        {
            if(arr[l] == 2)
            {
                if(arr[r]==0) ans+=w;
                else ans+=b;
            }
            else if(arr[r]==2)
            {
                if(arr[l]==0) ans+=w;
                else ans+=b;
            }
            else
            {
                cout << -1 << "\n";return;
            }
        }
        l++;r--;
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




