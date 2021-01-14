// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    //write your code here
    string s,t,ans;
    cin >> s >> t;
    if (s.size() > t.size())
        swap(s, t);
    int sl = s.size(), tl = t.size();
    int l=lcm(sl,tl);
    for(int i=0;i<l/tl;i++)
        ans+=t;
    for(int i=0;i<ans.size();i+=sl)
    {
        if(ans.substr(i,sl)!=s)
        {
            cout << -1 << "\n";
            return;
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




