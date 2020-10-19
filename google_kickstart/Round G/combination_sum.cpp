// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
    //write your code here
    lli  w,n;
    cin >> w >> n;
    vector<lli>arr(w);
    for(lli i=0;i<w;i++)
        cin >> arr[i];
    lli mi=999999999999;
    for(lli i=1;i<=n;i++)
    {
        lli moves=0;
        for(lli j=0;j<w;j++)
        {
            if(i<arr[j])
            moves+=min(abs(arr[j]-i),abs(i+n-arr[j]));
            else
                moves += min(abs(arr[j] - i), abs(arr[j]+n-i));
        }
        mi=min(mi,moves);
        // cout << moves << " ";
    }
    cout << "Case #" << t << ": " << mi << "\n";
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
    for(int i=0;i<t;i++)
    {
        solve(i+1);
    }
    return 0;
}




