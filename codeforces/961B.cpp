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
    vector<int>theo(n);
    vector<int>pos(n);
    vector<int>sum0;
    for(int i=0;i<n;i++)
    cin>>theo[i];
    for(int i=0;i<n;i++)
    cin >> pos[i];
    lli ans=0;
    for(int i=0;i<n;i++)
    {
        if(pos[i]==1)
        ans+=theo[i];
    }
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        if(pos[i]==0)
            sum+=theo[i];
    }
    sum0.push_back(sum);
    for(int i=1;i<n-k+1;i++)
    {
        int val=sum0[i-1];
        if(pos[i+k-1]==0)
        {
            val += theo[i + k - 1];
        }
        if (pos[i - 1] == 0)
            val -= theo[i-1];
        sum0.push_back(val);
    }
    // for(int i=0;i<sum0.size();i++)
    //     cout << sum0[i] << " ";
    int ma=*max_element(sum0.begin(),sum0.end());
    cout << ans+ma << "\n";
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




