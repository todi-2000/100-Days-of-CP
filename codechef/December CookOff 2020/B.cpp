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
    lli x,y,k,n;
    cin >> x >> y >> k >> n;
    lli pos=abs(x-y);
    if(pos%(2*k)==0)
    {
        lli dpos=pos/(2*k);
        if(min(x,y)+dpos<=n)
        cout << "Yes" << "\n";
        else
        {
            /* code */
            cout << "No"
                 << "\n";
        }
        
    }
    else
    {
        cout << "No" << "\n";
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




