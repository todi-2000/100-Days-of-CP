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
    vector<lli>ans(n);
    int l=n/2,r=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
        ans[i]=arr[l];
        l++;}
        else
        {
            ans[i]=arr[r];
            r++;
        }
    }
    if(n%2==0) cout << (n/2)-1 << "\n";
    else cout << (n/2) << "\n";
    for(int i=0;i<n;i++)
    cout << ans[i] << " ";
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