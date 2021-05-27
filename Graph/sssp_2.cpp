// Question Link: https://www.spoj.com/problems/PT07Y/
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

map<int, vector<int>> m1;
vector<bool> visited(10002, 0);

void dfs(int n)
{
    visited[n] = 1;
    for(int i = 0; i<m1[n].size(); i++)
    {
        if(visited[m1[n][i]] == 0)
        {
            dfs(m1[n][i]);
        }
    }
}

void solve()
{
    //write your code here
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        m1[u].push_back(v);
        m1[v].push_back(u);
    }
    dfs(1);
    for(int i = 1; i<=n;i++)
    {
        if(visited[i] == 0){
            cout << "NO" << "\n";
            return ;
        }
    }
    if(m == n-1)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
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




