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
    lli l,r;
    cin >> l >> r;
    lli n=r-l;
    if(n%2==0)
    {
        if(l%2==0)
        {
            lli ec=(n/2)+1;
            lli sec=(ec*(l+1+r-1))/2;
            lli oc=ec-1;
            lli oec=(oc*(l+r))/2;
            cout << sec-oec << "\n";
        }
        else
        {
            lli ec = (n / 2);
            lli sec = (ec * (l + 1 + r - 1)) / 2;
            lli oc = ec + 1;
            lli oec = (oc * (l + r)) / 2;
            cout << sec - oec << "\n";
        }
    }
    else
    {
        lli c=(n+1)/2;
        lli sec,oec;
        if(l%2==0)
        {
            sec = (c * (l + r - 1)) / 2;
            oec = (c * (l + 1 + r)) / 2;
        }
            
        else
        {
            sec = (c* (l + 1 + r)) / 2;
            oec = (c * (l + r-1)) / 2;
        }
        cout << sec-oec<< "\n";
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




