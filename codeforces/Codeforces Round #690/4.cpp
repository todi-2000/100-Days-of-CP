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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    vector<int>factor;
    for(int i=1;i<=sqrt(sum);i++)
    {
        if(sum%i==0)
        {
            factor.push_back(i);
            if((sum/i)!=i)
            factor.push_back(sum/i);
        }
    }
    sort(factor.begin(),factor.end());
    // for(int i=0;i<factor.size();i++)
    // cout << factor[i] << " ";
    // cout << "\n";
    int ans=INT_MAX;
    for(int i=0;i<factor.size();i++)
    {
        int val=sum/(factor[i]),initial=0,final=0,temp=0,count=0;
        while(final<n)
        {
            temp+=arr[final];
            if(temp==val)
            {
                count+=(final-initial);
                initial=final+1;
                temp=0;
            }
            else if(temp>val)
            {
                count=INT_MAX;
                break;
            }
            final++;
        }
        ans=min(ans,count);
    }
    // if(ans==INT_MAX)
    // cout << 0 << "\n";
    // else
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




