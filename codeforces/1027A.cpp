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
    int n;string s;
    cin >> n >> s;
    int first=0,last=n-1;
    while(first<last)
    {
        if(s[first]==s[last] || abs(s[first]-s[last])==2)
        {
            first++;last--;
        }
        else
        {
            cout << "NO" << "\n";
            return;
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




