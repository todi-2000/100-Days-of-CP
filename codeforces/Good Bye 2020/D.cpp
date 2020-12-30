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
    lli sum=0;
    for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+=arr[i];}
    vector<int>w;
    map<int,int>_map;
    vector<pair<int,int>>x;
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin >> u >> v;
        x.push_back({u,v});
        _map[u]++;_map[v]++;
    }
    for(int i=0;i<n-1;i++)
    {
        int u=x[i].first,v=x[i].second;
        int val=arr[u-1]+arr[v-1],diff;
        if(_map[u]==1 && _map[v]!=1){
            diff=val-arr[u-1];
            _map[u]--;
        }
        else if(_map[v]==1 && _map[u]!=1){
            diff=val-arr[v-1];
            _map[v]--;
        }
        else{
            int diff1,diff2;
            diff1=val-arr[u-1];
            diff2=val-arr[v-1];
            if(diff1>=diff2)
            _map[u]--,diff=diff1;
            else
            _map[v]--,diff=diff2;
        }
        w.push_back(diff);
    }
    sort(w.begin(),w.end()-1,greater<int>());
    // for(int i=0;i<w.size();i++)
    // cout << w[i] << " ";
    for(int i=0;i<n-1;i++)
    {
        cout << sum << " ";
        sum+=w[i];
    }
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




