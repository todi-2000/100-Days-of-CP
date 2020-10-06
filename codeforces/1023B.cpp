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
    string s,t;
    cin >> s >> t;
    if(m+1<n)
    {
        cout << "No" << "\n";return;
    }
    if(n==1 && m==1 && (s[0]=='*'||s[0]==t[0]))
    {
        cout << "Yes" << "\n";return;
    }
    if(n==1 && m==1 && s[0]!=t[0])
    {
        cout << "No" << "\n";return;
    }
    int j=n-1,i=0,diff=m-n;
    for(;i<n;i++)
    {
        if(s[i]!=t[i]) break;
    }
    for(;j>=0;j--)
    {
        if(s[j]!=t[j+diff]) break;
    }
    if(s==t)
    cout << "Yes" << "\n";
    else if(s[i]=='*' && s[j]=='*' && i==j)
    cout << "Yes" << "\n";
    else
    cout << "No" << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




