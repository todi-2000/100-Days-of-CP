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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>rows(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> rows[i][j];
        }
    }
    vector<vector<int>>columns(m,vector<int>(n));
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cin >> columns[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int j=0,x=0;
        for(;j<n;j++)
        {
            for(int k=0;k<m;k++){
            if(rows[j][k]==columns[0][i])
            {
                x=j;break;
            }
            }
        }
        for(int l=0;l<m;l++)
        cout << rows[x][l] << " ";
        cout << "\n";
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





