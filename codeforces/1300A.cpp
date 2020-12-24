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
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]==0)
        count++;
    }
    int ans=count;
    if(sum!=0 && count==0)
    {
        cout << 0 << "\n";
    }
    else if(sum==0 && count==0)
    {
        cout << 1 << "\n";
    }
    else if(count!=0 && sum==-count)
    {
        cout << ans+1 << "\n";
    }
    else if(count!=0)
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




