// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    int n;
    cin >> n;
    vector<int>speed(n);
    vector<vector<float>> diff(n,vector<float>(n));
    for (int i = 0; i < n; i++)
        cin >> speed[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(speed[i]==speed[j])
                diff[i][j]=0;
            else if(i>j)
                diff[i][j]=float(i-j)/float(speed[j]-speed[i]);
            else
                diff[i][j]=float(j-i)/float(speed[i]-speed[j]);
        }
    }
    int ma = INT_MIN, mi = INT_MAX,ans=1;
    for(int i=0;i<n;i++)
    {
        ans=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(diff[i][j]>0)
                ans++;
                else
                {
                    for(int k=0;k<n;k++)
                    {
                        if(diff[j][k]>0 && diff[i][k]>0 && diff[j][k]>diff[i][k])
                        {    ans++;break;}

                    }
                }
            }
        }
        ma=max(ans,ma);
        mi=min(ans,mi);
    }
    cout << mi <<" " << ma << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("A:/c++/inputf.in", "r", stdin);
    freopen("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
