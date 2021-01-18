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
    map<lli,lli>_map;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        _map[arr[i]]++;
    }  
    lli s=0,d=0;
    for(auto i:_map)
    {
        s=max(s,i.second);
    }
    // cout << d << " ";
    if(s == _map.size())
    cout << s-1 << "\n";
    else if(s<_map.size())
    cout << s << "\n";
    else
    {
        cout << _map.size() << "\n";
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




