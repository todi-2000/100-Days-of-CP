// Question Link: https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void dfs(int n, map<int,vector<int>>m, vector<bool>visited, vector<int>&distance)
{
    visited[n] = 1;
    for(int i =0; i<m[n].size();i++)
    {
        if(visited[m[n][i]] == 0)
        {
            distance[m[n][i]] = distance[n] + 1;
            dfs(m[n][i], m, visited, distance);
        }
    }
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    map<int,vector<int>>m;
    for(int i = 0; i<n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    vector<bool>visited(n+1,0);
    vector<int>distance(n+1,0);
    dfs(1, m, visited, distance);
    // for(int i = 1;i<=n;i++)
    // cout << distance[i] << "\n";
    int q;
    cin >> q;
    int mi = INT_MAX, girl = 0;
    for(int i = 0; i<q; i++)
    {
        int a;
        cin >> a;
        if(distance[a]<mi)
        {
            mi = distance[a];
            girl = a;
        }
        if (distance[a] == mi && a < girl)
        {
            mi = distance[a];
            girl = a;
        }
    }
    cout << girl << "\n"; 
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




