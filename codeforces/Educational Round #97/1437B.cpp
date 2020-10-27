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
    string s;
    cin >> n >> s;
    int ans=0,c0=1,c1=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1] && s[i]=='1')
        c1++;
        else if (s[i] == s[i - 1] && s[i] == '0')
        c0++;
    }
    cout << max(c1,c0)-1 << "\n";
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




