// Question Link: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

//DFS Code
void dfs(int v, map<int,vector<int>>m,vector<bool>&visited)
{
    visited[v] = 1;
    for(int i = 0; i < m[v].size(); i++)
    {
        if(visited[m[v][i]] == 0)
            dfs(m[v][i], m, visited);
    }
}

void solve()
{
    //write your code here
    int n, e;
    cin >> n >> e;
    map<int,vector<int>>m;
    // Creating Adjanency List
    for(int i = 0; i<e; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    vector<bool>visited(n+1,0);
    // Counting connected component
    int cc_count  = 0;
    for(int i = 1; i<=n; i++)
    {
        if(visited[i] == 0)
            dfs(i,m,visited), cc_count++;
    }
    cout << cc_count << "\n";
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




