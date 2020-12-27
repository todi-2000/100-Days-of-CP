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
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int a=i,val=0;
        for(int j=0;j<n;j++)
        {
            int d=abs(j-a)+(j-0);
            val+=(d*arr[j]);
            val+=(abs(a-0)*arr[j]);
            int u=abs(a-0)+abs(0-j);
            val+=(u*arr[j]);
            val+=(abs(a-j)*arr[j]);
            // cout <<val<< "\n";
        }
        ans=min(ans,val);
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




