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
    int n,q;
    cin >> n >> q;
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    lli val=arr[0],drop=0,ans=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            if(drop!=0)
            {ans += val - drop;
            drop=0;
            val=arr[i];}
            else
            val=arr[i];
        }    
        else
        {
            drop=arr[i];
        }
    }
    if(drop==0)
    ans+=val-drop;
    else
    ans+=val;
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




