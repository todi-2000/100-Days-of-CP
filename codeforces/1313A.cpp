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
    int a,b,c;
    cin >> a >> b >> c;
    vector<int>arr={a,b,c};
    sort(arr.begin(),arr.end(),greater<int>());
    int ans=0;
    for(int i=0;i<3;i++)
    {
        ans+=min(1,arr[i]);
        arr[i]=max(0,arr[i]-1);
    }
    ans+=min(1,min(arr[0],arr[1]));
    arr[0]--,arr[1]--;
    ans += min(1, max(0,min(arr[0], arr[2])));
    arr[0]--, arr[2]--;
    ans += min(1, max(0,min(arr[1], arr[2])));
    arr[1]--, arr[2]--;
    if(arr[2]>0 && arr[1]>0 && arr[0]>0)
    ans++;
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




