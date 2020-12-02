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
    lli n,p,k;
    cin >> n >> p >> k;
    string s;
    cin >> s;
    lli x,y;
    cin >> x >> y;
    vector<lli>pos;
    lli i=p-1;
    pos.push_back(i);
    while(i<n)
    {
        if(i+k<n)
        pos.push_back(i+k);
        i+=k;
    }
    // for(int i=0;i<pos.size();i++)
    // cout << pos[i] << " ";
    lli ans=0;
    for(lli i=0;i<pos.size();i++)
    {
        if(s[pos[i]]=='0')
        ans+=x;
    }
    // cout << ans << " ";
    for(lli i=0;i<n-p;i++)
    {
        lli val=0;
        val+=(y*(i+1));
        for(int j=0;j<pos.size();j++)
        {
            if(pos[j]+i+1<n && s[pos[j]+i+1]=='0')
            val+=x;
        }
        ans=min(ans,val);
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




