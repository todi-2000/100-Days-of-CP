// Question Link:https://codeforces.com/problemset/problem/1398/C
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
    map<int,int>_map;
    for(int i=0;i<n;i++)
    {   
        int r;
        cin >> r;
        _map[r]++;
    }
    int rem=0,ans=0;
    for(auto val:_map)
    {
        ans += (val.second / val.first);
        rem=rem+(val.second%val.first);
        if(rem>=val.first)
        {
            ans+=(rem/val.first);
            rem=(rem%val.first);
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




