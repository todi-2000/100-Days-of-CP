// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool dfs(int node, int par, map<int, vector<int>>m1, vector<bool>&visited)
{
    visited[node] = 1;
    for(int i = 0; i < m1[node].size(); i++)
    {
        if(visited[m1[node][i]] == 0)
        {
            if(dfs(m1[node][i], node, m1, visited))
                return true;
        }
        else
        {
            if(m1[node][i]!=par)
                return true;
        }
    }
    return false;
}

void solve()
{
    //write your code here
    int n, m;
    cin >> n >> m;
    map<int,vector<int>>m1;
    for(int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        m1[u].push_back(v);
        m1[v].push_back(u);
    }
    vector<bool>visited(n+1,0);
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            if (dfs(i, -1, m1, visited)){
                cout << "cycle detected"
                     << "\n";
                return ;
            }
        }
    }
    cout << "No cycle" << "\n";
}


int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen ("A:/c++/inputf.in", "r", stdin);
    // freopen ("A:/c++/outputf.in", "w", stdout);
    // #endif
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




