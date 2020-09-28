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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>arr(2*n,vector<int>(2));
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    }
    if(m%2!=0)
    {
        cout << "NO" << "\n";
        return;
    }
    else
    {
        int x=0;
        while(x<2*n)
        {
            if(arr[x][1]==arr[x+1][0])
            {
                cout << "YES" << "\n";
                return;
            }
            x+=2;
        }
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




