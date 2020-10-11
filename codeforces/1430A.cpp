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
    if(n==1 || n==2 || n==4)
    {
        cout << -1 << "\n";
        return;
    }
    int x=n-3;
    int y=n-5;
    int z=n-7;
    if(x%3==0 || x%5==0 || x%7==0)
    {
        if(x%3==0)
        {
            cout << int(x/3)+1 << " " << 0 << " " << 0 << "\n";
            return;
        }
        else if(x%5==0)
        {
            cout << 1 << " " << int(x / 5) << " " << 0 << "\n";
            return;
        }
        else
        {
            cout << 1 << " " << 0 << " " << int(x / 7) << "\n";
            return;
        }
    }
    if (y % 3 == 0 || y % 5 == 0 || y % 7 == 0)
    {
        if (y % 3 == 0)
        {
            cout << int(y / 3) << " " << 1 << " " << 0 << "\n";
            return;
        }
        else if (y % 5 == 0)
        {
            cout << 0 << " " << int(y / 5)+1 << " " << 0 << "\n";
            return;
        }
        else
        {
            cout << 0 << " " << 1 << " " << int(y / 7) << "\n";
            return;
        }
    }
    if (z % 3 == 0 || z % 5 == 0 || z % 7 == 0)
    {
        if (z % 3 == 0)
        {
            cout << int(z / 3)  << " " << 0 << " " << 1 << "\n";
            return;
        }
        else if (z % 5 == 0)
        {
            cout << 0 << " " << int(z / 5) << " " << 1 << "\n";
            return;
        }
        else
        {
            cout << 0 << " " << 1 << " " << int(z / 7)+1 << "\n";
            return;
        }
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





