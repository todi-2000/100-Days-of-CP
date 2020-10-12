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
    lli n,k;
    cin >> n >> k;
    vector<lli>arr(n);
    lli carry=0;
    lli ans=-1;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]+carry>=k)
        {
            carry += arr[i] - k;
            arr[i]=k;
        }
        else
        {
            if(ans==-1)
            ans=i+1;
        }
    }
    if(ans==-1 && carry==0)
    {
        cout << n+1 << "\n";
    }
    else if(ans==-1 && carry!=0)
    {
        cout << n+(lli)(carry/k)+1 << "\n";
    }
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




