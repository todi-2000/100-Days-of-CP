// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int k)
{
    //write your code here
    lli n;
    cin >> n;
    lli sum1=(n*(n+1))/2;
    lli sum=(n*(n+1))/4;
    vector<int>ans(n,0);
    if(k==1)
    {
        for(int i=n-1;i>=0 && sum>0;i--)
        {
            if(sum>=i+1)
            {
                ans[i]=1;
                sum=sum-i-1;
            }
        }
        if(sum1%2==0) cout << 0 << "\n";
        else cout << 1 << "\n";
        for(int i=0;i<n;i++)
        cout << ans[i] ;
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
    int k;
    cin >> k;
    int t;
    cin >> t;
    while(t--)
    {
        solve(k);
    }
    return 0;
}




