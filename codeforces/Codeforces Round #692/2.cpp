// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool digits(lli x,lli n)
{
    while (x > 0)
    {
        if (x%10!=0 && n%(x % 10)!=0)
            return false;
        x /= 10;
    }
    return true;
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    lli x=n;
    while(digits(x,n)==false)
    {
        n++;
        x=n;
    }
    cout << n << "\n";
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




