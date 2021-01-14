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
    int n ,d;
    cin >> n >> d;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    for(int j=0;j<n;j++)
    {
        if(arr[j]>d)
        {
            if(arr[0]+arr[1]<=d)
            continue;
            else
            {
                cout << "NO" << "\n";
                return;
            }
            
        }
    }
    cout << "YES" << "\n";
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




