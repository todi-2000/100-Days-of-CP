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
    vector<int>arr(k);
    for(int i=0;i<k;i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end());
    vector<int>num;
    int count=0;
    for(int i=0;i<k-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
            num.push_back(count);
            count=0;
        }
        else
        count++;
    }
    count++;
    num.push_back(count);
    sort(num.begin(),num.end(),greater<int>());
    // for(int i=0;i<num.size();i++)
    // cout << num[i] << " ";
    int i=min(n-1,(int)num.size()-1);
    int ans=0;
    for(;i>=0;i--)
    {
        int current=num[i],val=0;
        while(current>=1)
        {
            val=0;
            for(int j=i;j>=0;j--)
            {
                val+=(num[j]/current);
            }
            if(val>=n)
            ans=max(current,ans);
            current--;
        }
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




