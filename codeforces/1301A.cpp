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
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            if(a[i]!=c[i])
            {
                cout << "NO" << "\n";
                return;
            }
        }
        else
        {
            if(c[i]!=b[i] && c[i]!=a[i])
            {
                cout << "NO" << "\n";
                return;
            }
            
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




