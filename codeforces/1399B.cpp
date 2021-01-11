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
    vector<int>ans;
    for(int i=0;i<ceil(double(n)/2);i++)
    {
        if(i==n-i-1)
        ans.push_back(arr[i]);
        else
        {
            ans.push_back(arr[n-i-1]);
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout << ans[i] << " ";
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




