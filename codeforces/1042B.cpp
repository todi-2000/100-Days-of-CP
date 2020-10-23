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
    cin >>n;
    map<string,int>_map;
    _map["A"] = INT_MAX;
    _map["B"] = INT_MAX;
    _map["C"] = INT_MAX;
    _map["AB"] = INT_MAX;
    _map["AC"] = INT_MAX;
    _map["BC"] = INT_MAX;
    _map["ABC"] = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int x;string s;
        cin >> x >> s;
        sort(s.begin(),s.end());;
        _map[s]=min(x,_map[s]);
    }
    int ans=INT_MAX;
        ans = min(_map["A"] + _map["B"] + _map["C"],_map["ABC"]);
    for (auto i : _map)
    {
        cout << i.first << ' ' << i.second << "\n";
        if(i.first.size()==2 && i.second!=INT_MAX)
        {
            if (i.first == "AB" && _map["C"]!=INT_MAX)
                ans=min(ans,_map["C"]+i.second);

            else if (i.first == "AC" && _map["B"] != INT_MAX)
                ans = min(ans, _map["B"] + i.second);

            if (i.first == "BC" && _map["A"] != INT_MAX)
                ans = min(ans, _map["A"] + i.second);
        }
    }
    if( ans==0)
    {
        cout << -1 << "\n";
        return;
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




