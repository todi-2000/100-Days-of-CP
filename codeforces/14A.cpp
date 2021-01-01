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
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int row1=INT_MAX,row2=0,col1=INT_MAX,col2=0,flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='*')
            {
               row1=min(i,row1);
               row2=max(i,row2);
               col1=min(j,col1);
               col2=max(j,col2);
            }
        }
    }
    for(int i=row1;i<=row2;i++)
    {
        for(int j=col1;j<=col2;j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
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




