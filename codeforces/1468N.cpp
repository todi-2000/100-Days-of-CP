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
    int c1,c2,c3,a1,a2,a3,a4,a5;
    cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
    c1 = c1-a1;
    c2 = c2-a2;
    c3 = c3-a3;
    if(c1<0 || c2 <0 || c3<0)
    cout << "NO" << "\n";
    else
    {
        if(c1+c3>=a4)
        {
            if(c1<a4)
            c3-=(a4-c1);
        }
        else
        {
            cout << "NO" << "\n";return;
        }
        if(c2+c3>=a5)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
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




