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
    vector<int>r(n);
    int sum=0,mar=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> r[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    int sum1 = 0, mab = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        sum+=r[i];
        if(sum<0) sum=0;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        sum1 += b[i];
        if (sum1 < 0)
            sum1 = 0;
    }
    cout << sum+sum1 <<"\n";
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




