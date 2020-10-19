// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
    //write your code here
    lli n;
    cin >> n;
    vector<vector<lli>>coins(n,vector<lli>(n));
    for(lli i=0;i<n;i++)
    for(lli j=0;j<n;j++)
    cin >> coins[i][j];
    lli ans=0;
    for(lli i=0;i<n;i++)
    {
        lli j=0,sum=0,k=i;
        while(j<n && k<n)
        {
            sum+=coins[k][j];k++;j++;
        }
        ans=max(ans,sum);
    }
    for (lli i = 1; i < n; i++)
    {
        lli j = 0, sum = 0, k = i;
        while (j < n && k<n)
        {
            sum += coins[j][k];
            k++;
            j++;
        }
        ans = max(ans, sum);
    }
    cout << "Case #" << t << ": " << ans << "\n";
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
    for(int i=0;i<t;i++)
    {
        solve(i+1);
    }
    return 0;
}




