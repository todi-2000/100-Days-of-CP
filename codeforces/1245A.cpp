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
    if(b!=0)
    return gcd(b,a%b);
    else
    return a;
}
void solve()
{
    int a,b;
    cin >> a >> b;
    int val=gcd(max(a,b),min(a,b));
    if(val==1)
    cout << "Finite" << "\n";
    else
    cout << "Infinite" << "\n";
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




