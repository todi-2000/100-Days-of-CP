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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    if(arr[0]==0)
    {
        cout << 0 << "\n";
        return;
    }
    lli initial=arr[0],final=initial-1;
    for(int i=1;i<n;i++)
    {   
        if(final==0 && arr[i]==0)
        {
            cout << initial << "\n";return;
        }
        else
        {
            initial+=arr[i];
            final--;final+=arr[i];
        }
    }
    cout << initial << "\n";
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




