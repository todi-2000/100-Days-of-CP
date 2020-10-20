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
    int x=n%10;
    int ans=(x-1)*10;
    int l=0;
    while(n>0)
    {
        l++;
        n=n/10;
    }
    // cout << l;
    if(l==1) ans+=1;
    else if(l==2) ans+=3;
    else if(l==3) ans+=6;
    else if(l==4) ans+=10;
    cout << ans << "\n";
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




