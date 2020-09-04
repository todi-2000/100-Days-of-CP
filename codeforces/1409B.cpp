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
    lli a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    if(max(x,a-n)>max(y,b-n))
    {
        swap(a,b);
        swap(x,y);
    }
    lli ami=min(abs(a-x),n);
    lli bmi=min(abs(b-y),n-ami);
    a-=ami;
    b-=bmi;
    cout << a*b << "\n";
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




