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
    char ch;
    int ans = 0,val=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]!='-')
        {
            ch=s[i];break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        {
            if(s[(i+1)%n]=='-') ans++;
            else ans+=2;
            val++;
        }
        else if(s[i]==ch)
            val++;
        else
            val=0;
   }
    if(val==n)
    cout << val << "\n";
    else
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




