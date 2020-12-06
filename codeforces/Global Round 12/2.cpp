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
    int n,k;
    cin >> n >> k;
    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>>diff;
    for(int i=0;i<n;i++)
    {
        vector<int>x;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                x.push_back(abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1]));
            }
        }
        diff.push_back(x);
    }
    // for(int i=0;i<diff.size();i++)
    // {
    //     for(int j=0;j<diff[i].size();j++)
    //     cout << diff[i][j] << " ";
    //     cout << "\n";
    // }
    int ans=INT_MAX;
    for (int i = 0; i < diff.size(); i++)
    {
        int x =1,flag1 = 0;
        for (int j = 0; j < diff[i].size(); j++)
        {
            if(diff[i][j]>k)
            {
                int flag=0;
                for(int l=0;l<diff[j].size();l++)
                {
                    if(diff[j][l]<k)
                    {
                        flag=0;
                        x++;
                        break;
                    }
                }
                if(flag==0){flag1=1;
                break;}
            }
        }
        if(flag1==0)
        ans=min(ans,x);
    }
    if(ans==INT_MAX)
    cout << -1 << "\n";
    else
    {
        cout << ans << "\n";
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




