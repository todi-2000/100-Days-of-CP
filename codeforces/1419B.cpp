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
   lli n;
   cin >> n;
   vector<lli>arr(31);
   for(int i=0;i<31;i++)
   {
        lli val=pow(2,i+1)-1;
        arr[i]=(((val)*(val+1)))/2;
   }
    lli sum=0,ans=0;
    for(int i=0;i<31;i++)
    {
        sum+=arr[i];
        if(sum>n)
        {
            ans=i;
            break;
        }
        // cout << sum << ' ';
    }
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




