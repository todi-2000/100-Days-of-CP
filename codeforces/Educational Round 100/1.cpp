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
    lli a,b,c;
    cin >> a >> b >> c;
    lli sum=a+b+c;
    if(sum%9==0)
    {
        if(a>=sum/9 && b>=sum/9 && c>=sum/9)
        cout << "YES" << "\n";
        else
        {
            cout << "NO" << "\n";
        }
        
    }
    else
    {
        cout << "NO" << "\n";
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




