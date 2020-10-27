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
    if(n==1) {
        cout << 1 << "\n";return;
    }
    if(n==2 || n==3)
    {
        cout << "NO SOLUTION" << "\n";return;
    }
    for(int i=2;i<=n;i+=2)
    cout << i << " ";
    for(int i=1;i<=n;i+=2)
    cout << i << " ";
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




