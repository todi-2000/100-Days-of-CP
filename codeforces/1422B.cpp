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
    lli n,m;
    cin >> n >> m;
    vector<vector<lli>>arr(n,vector<lli>(m));
    for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<m;j++)
        cin >> arr[i][j];
    }
    lli ans=0;
    for(lli i=0;i<n/2;i++)
    {
        for(lli j=0;j<m/2;j++)
        {
            lli val1=arr[i][j];
            lli sum1=abs(arr[i][j]-val1)+abs(arr[n-i-1][j]-val1)+abs(arr[i][m-j-1]-val1)+abs(arr[n-i-1][m-j-1]-val1);
            lli val2 = arr[i][m-j-1];
            lli sum2 =abs (arr[i][j] - val2) + abs(arr[n - i - 1][j] - val2) + abs(arr[i][m - j - 1] - val2) + abs(arr[n - i - 1][m - j - 1] - val2);
            lli val3 = arr[n-i-1][j];
            lli sum3 = abs(arr[i][j] - val3) + abs(arr[n - i - 1][j] - val3) + abs(arr[i][m - j - 1] - val3) + abs(arr[n - i - 1][m - j - 1] - val3);
            lli val4 = arr[n-i-1][m-j-1];
            lli sum4 =abs (arr[i][j] - val4) + abs(arr[n - i - 1][j] - val4) + abs(arr[i][m - j - 1] - val4) + abs(arr[n - i - 1][m - j - 1] - val4);
            // cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4 <<"\n";
            if (sum1 <= sum2 && sum1 <= sum3 && sum1 <= sum4)
            {
                ans+=sum1;
                arr[i][j]=val1;
                arr[i][m - j - 1] = val1;
                arr[n - i - 1][j] = val1;
                arr[n - i - 1][m - j - 1]=val1;
            }
            else if (sum2 <= sum1 && sum2 <= sum3 && sum2 <= sum4)
            {
                ans += sum2;
                arr[i][j] = val2;
                arr[i][m - j - 1] = val2;
                arr[n - i - 1][j] = val2;
                arr[n - i - 1][m - j - 1] = val2;
            }
            else if (sum3 <= sum1 && sum3 <= sum2 && sum3 <= sum4)
            {
                ans += sum3;
                arr[i][j] = val3;
                arr[i][m - j - 1] = val3;
                arr[n - i - 1][j] = val3;
                arr[n - i - 1][m - j - 1] = val3;
            }
            else if (sum4 <= sum2 && sum4 <= sum3 && sum4 <= sum1)
            {
                ans += sum4;
                arr[i][j] = val4;
                arr[i][m - j - 1] = val4;
                arr[n - i - 1][j] = val4;
                arr[n - i - 1][m - j - 1] = val4;
            }
            // for (int i = 0; i < n; i++)
            // {
            //     for (int j = 0; j < m; j++)
            //         cout << arr[i][j] << " ";
            //     cout << "\n";
            // }
        }
        if(n%2!=0)
        {
            cout << 1 << "\n";
            for(int i=0;i<m/2;i++)
            {
                ans += abs(arr[(int)n / 2][m - i - 1] - arr[(int)n / 2][i]);
            }
        }
        if(m % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                ans += abs(arr[n-i-1][(int)m/2]-arr[i][(int)m/2]);
            }
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     cout << arr[i][j] << " ";
    //     cout << "\n";
    // }
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




