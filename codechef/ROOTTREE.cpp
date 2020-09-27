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
    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    if(n==1)
    {
        cout << 0 << "\n";
        return;
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==1 || arr[i][1]==1)
        {
            if(arr[i][0]!=1)
                count++;
        }
    }
    cout << count << "\n";
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




