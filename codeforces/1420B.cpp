// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli countSetBits(lli number)
{
    // log function in base 2
    // take only integer part
    return (lli)log2(number) + 1;
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    vector<lli>arr(n);
    map<lli,lli>_map;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
        _map[countSetBits(arr[i])]++;
    }
    lli ans =0;
    for(auto i:_map)
    {
        // cout << i.first << " " << i.second << "\n";
        if(i.second>1)
        ans+=((i.second)*(i.second-1))/2;
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




