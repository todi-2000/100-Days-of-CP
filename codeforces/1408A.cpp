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
    vector<vector<lli>>a(3,vector<lli>(n));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        cin >> a[i][j];
    }
    cout << a[0][0] << " ";
    lli val=a[0][0];
    for(int i=1;i<n;i++)
    {
        if(a[0][i]==val || a[0][n-1]==a[0][0])
        {
            for (int j = 1; j < 3; j++)
            {
                if(a[j][i]==val || a[j][n-1]==a[0][0]) continue;
                else
                {
                    cout << a[j][i] << " ";
                    val=a[j][i];
                    break;
                }
            }
        }
        else
        {
            cout << a[0][i] << " ";
            val=a[0][i];
        }
        
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




