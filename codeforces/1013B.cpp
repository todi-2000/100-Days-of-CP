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
    int n,x;
    cin >> n >> x;
    vector<int>arr(n);
    map<int,int>_map,_map1;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        _map[arr[i]]++;
    }
    for(auto i:_map)
    {
        if(i.second>1)
        {cout << 0;return;}
    }
    int count=1;
    while(count<2)
    {
        for(int i=0;i<n;i++)
        {
            int val=arr[i]&x;
            _map1[val]++;
            if(val!=arr[i] && _map[val]==1)
            // _map[val]++;
            // if(_map[val]>1)
            {
                cout << count << "\n";
                return;
            }
        }
        count++;
        for(auto s:_map1)
        {
            if(s.second>=2)
            {
                cout << count << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
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




