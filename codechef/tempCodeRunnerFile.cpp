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
    int n,k,l;
    cin >> n >> k >> l;
    map<int,int>_map;
    for(int i=1;i<=k;i++)
        _map[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(i%n!=0)
            _map[i%n]++;
        else
            _map[(i%n)+k]++;
    }
    for(auto i:_map)
    {
        if(i.second>l)
        {
            cout << -1 << "\n";
            return;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if (i % n != 0)
            cout << i%n << " ";
        else
            cout << (i%n)+k << " ";
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




