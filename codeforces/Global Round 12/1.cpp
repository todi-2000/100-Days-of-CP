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
    string s;
    cin >> s;
    string ans;int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='t') count++;
        else
        ans+=s[i];
    }
    for(int i=0;i<count;i++)
    ans+='t';
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




