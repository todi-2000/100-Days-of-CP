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
    int n,w;
    cin >> n >> w;
    int l=max(n,w);
    int x=(6-l)+1;
    if(x==1)
    {
        cout << "1/6" << "\n";
    }
    if (x == 2)
    {
        cout << "1/3"
             << "\n";
    }
    if (x == 3)
    {
        cout << "1/2"
             << "\n";
    }
    if (x == 4)
    {
        cout << "2/3"
             << "\n";
    }
    if (x == 5)
    {
        cout << "5/6"
             << "\n";
    }
    if (x == 6)
    {
        cout << "1/1"
             << "\n";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




