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
    if(s=="2020")
    {
        cout << "YES" << "\n";return;
    }
    if(s.substr(0,4)=="2020" || s.substr(n-4,4)=="2020")
    {
        cout << "YES" << "\n";return;
    }
    if(s[0]=='2' && s[n-1]=='0')
    {
        if(s[n-2]=='2' && s[n-3]=='0') 
        {
            cout << "YES" << "\n";
        }
        else if (s[n - 2] == '2' && s[1] == '0')
        {
            cout << "YES"
                 << "\n";
        }
        else if (s[1] == '0' && s[2] == '2')
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        
    }
    else
    {
        cout << "NO" << "\n";return;
    }
    
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




