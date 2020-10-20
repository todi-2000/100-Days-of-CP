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
    lli n;
    cin >> n;
    vector<lli>arr(n);
    map<lli,vector<lli>>_map;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
        _map[arr[i]].push_back(i+1);
    }
    if(_map.size()==1) 
    {
        cout << "NO" << "\n";return;
    }
    else
    {
        cout << "YES" << "\n";
        vector<vector<lli>>ans;
        vector<lli>x;
        for(auto i:_map) x.push_back(i.first);
        for(auto i: _map)
        {
            if(i.first!=x[0])
            {
                for (auto j : i.second)
                {
                    ans.push_back({_map[x[0]][0], j});
                }
            }
        }
        for(lli i=1;i<_map[x[0]].size();i++)
        {
            ans.push_back({_map[x[1]][0],_map[x[0]][i]});
        }
        for(lli i=0;i<ans.size();i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << "\n";
        }
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




