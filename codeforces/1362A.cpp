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
    lli a,b;
    cin >> a >> b;
    lli x=0,y=0;
    while(a%2==0)
    {
        x++;
        a/=2;
    }
    while(b%2==0)
    {
        y++;
        b/=2;
    }
    // cout << a << " " << b << " ";
    if(a!=b)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ceil(double(abs(x-y))/3) << "\n";
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




