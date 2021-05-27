// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;


bool dfs(int n, int c, map<int, vector<int>> m, vector<bool>&visited, vector<int>&color)
{
    visited[n] = 1;
    color[n] = c;
    for(int i = 0; i<m[n].size();i++)
    {
        if(visited[m[n][i]]==0)
        {
            if(dfs(m[n][i], c^1, m, visited, color) == false)
                return false;
        }
        else
        {
            if(color[n]==color[m[n][i]])
                return false;
        }
    }
    return true;
}


void solve(int t)
{
    //write your code here
    int n, k;
    cin >> n >> k;
    map<int, vector<int>>m ;
    for(int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    vector<bool>visited(n+1,0);
    vector<int>color(n+1,0);
    for(int i = 1;i <= n; i++)
    {
        if(visited[i] == 0)
        {
            if (dfs(i, 1, m, visited, color)==false)
            {
                cout << "Scenario #" << t << ":\n"
                     << "Suspicious bugs found!" << "\n";
                return ;
            }
        }
    }
    cout << "Scenario #" << t << ":\n"
         << "No suspicious bugs found!"
         << "\n";
    return;
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
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}




