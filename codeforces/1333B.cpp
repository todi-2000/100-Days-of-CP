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
    vector<int>a(n);
    vector<lli>b(n);
    vector<pair<int,int>>pos(n);
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        pos[i]={x,y};
        if(a[i]==1) x++;
        else if(a[i]==-1) y++;
    }
    for(int i=0;i<n;i++)
    cin >> b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(b[i]<a[i] && pos[i].second<=0)
            {
                cout << "NO" << "\n";
                return;
            }
            else if(b[i]>a[i] && pos[i].first<=0)
            {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
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




