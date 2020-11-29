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
    lli n,m,r,c;
    cin >> n >> m >> r >> c;
    lli x=ceil(double(n)/2);
    lli y = ceil(double(m) / 2);
    lli n1,n2;
    if(r>x)
    n1=1;
    else
    n1=n;
    if(c>y)
    n2=1;
    else n2=m;
     cout << abs(n1-r)+abs(n2-c) << "\n";
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




