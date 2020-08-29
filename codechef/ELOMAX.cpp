// Question Link:https://www.codechef.com/LTIME87B/problems/ELOMAX
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
    vector<int>ratings(n);
    for(int i=0;i<n;i++)
        cin >> ratings[i];
    vector<vector<int>> rchanged(n, vector<int>(m)), rankings(n, vector<int>(m));
    vector<int> bestratings, bestranking(n);
    for(int i=0;i<n;i++)
    {
        int maxi=0,months=0;
        for(int j=0;j<m;j++)
        {
            int ch;
            cin >> ch;
            rchanged[i][j]=ratings[i]+ch;
            ratings[i] = rchanged[i][j];
            if(ratings[i]>maxi){
                maxi=ratings[i];
                months=j+1;
            }
        }
        bestratings.push_back(months);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //incomplete
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




