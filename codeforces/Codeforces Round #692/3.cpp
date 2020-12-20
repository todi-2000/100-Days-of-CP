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
    vector<pair<int,int>>pos(n);
    vector<bool>row(n);
    vector<bool>col(n);
    for(int i=0;i<m;i++)
    {
        cin >> pos[i].first >> pos[i].second;
        row[pos[i].first]=true;
        col[pos[i].second]=true;
    }
    lli ans=0;
    for(int i=0;i<m;i++)
    {
        if(pos[i].first==pos[i].second)
        continue;
        else if(row[pos[i].second]==false && col[pos[i].first]==false)
        {
            row[pos[i].second]=true;
            ans++;
        }
        else if (row[pos[i].second] == true && col[pos[i].first] == false)
        {
            col[pos[i].first] = true;
            col[pos[i].second] = false;
            ans++;
        }
        else if (row[pos[i].second] == false && col[pos[i].first] == true)
        {
            row[pos[i].second] = true;
            row[pos[i].first]=false;
            ans++;
        }
        else if(row[pos[i].second] == true && col[pos[i].first] == true)
        {
            int j=0;
            while(j<n)
            {
                if(row[j]==false && col[j]==false)
                break;
                j++;
            }
            row[pos[i].first] = false;
            col[pos[i].second] = false; 
            row[j] = true;
            col[j]=true;
            ans+=2;
        }
        
    }
    cout << ans << "\n";
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




