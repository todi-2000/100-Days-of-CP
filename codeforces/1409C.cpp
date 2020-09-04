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
    int n,x,y;
    cin >> n >> x >> y;
    int diff=y-x;
    int arsize=n-1;
    while(diff%arsize!=0)
        arsize--;
    int cd=diff/arsize;
    int l=y;
    while(n>0 && l>0)
    {
        cout << l << " ";
        l=l-cd;
        n--;
    }
    while(n>0)
    {
        y+=cd;
        cout << y << " ";
        n--;
            
    }
    cout << "\n";
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




