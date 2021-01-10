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
    int w,h;
    cin >> w >> h;
    int u1,d1,u2,d2;
    cin >> u1 >> d1 >> u2 >> d2;
    if(d1<d2)
    {
        swap(d1,d2);
        swap(u1,u2);
    }
    while(h!=0)
    {
        if(h==d1 || h==d2)
        {
            w+=h;
            if(h==d1) w-=u1;
            if(h==d2) w-=u2;
            if(w<0) w=0;
        }
        else
        {
            w+=h;
        }
        h--;
    }
    cout << max(0,w) << "\n";
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




