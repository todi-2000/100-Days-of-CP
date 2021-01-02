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
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << "\n";
    for(int i=0;i<m;i++)
    {
        if(i+1!=y)
        cout << x << " " << i+1 << "\n";
    }
    bool flag=0;
    for(int i=m;i>0;i--)
    {
        flag=!flag;
        for(int j=1;j<=n;j++)
        {
            // cout << j << " ";
            if(j!=x && flag==1)
            {
                cout << j << " " << i << "\n";
            }
            else if(n-j+1!=x && flag==0)
            {
                cout << n-j+1 << " " << i << "\n";
            }
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




