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
    string s;
    cin >> s;
    if(s.size()==1)
    {
        cout << 0 << "\n";return;
    }
    if(s.size()==2)
    {
        if(s[0]==s[1])
        cout << 1 << "\n";
        else
        cout << 0 << "\n";
        return;
    }
    int ans=0;
    map<int,int>_map;
    for(int i=0;i<s.size();i++)
    {
        if(_map[i]==0){
        if(i-2>=0 && _map[i-2]==0 && s[i-2]==s[i])
        {
            _map[i-2]++;
            ans++;
        }
        if(i-1>=0 && _map[i-1]==0 && s[i-1]==s[i])
        {
            _map[i-2]++;
            ans++;
        }
        if(i+1<s.size() && s[i+1]==s[i])
        {
            _map[i+1]++;
            ans++;
        }
        if(i+2<s.size() && s[i+2]==s[i])
        {
            _map[i+2]++;
            ans++;
        }
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




