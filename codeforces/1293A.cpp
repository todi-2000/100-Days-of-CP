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
    lli n,s,k;
    cin >> n >> s >> k;
    vector<lli>arr(k);
    for(int i=0;i<k;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    for(int i=0;i<k;i++)
    {
        if(arr[i]==s)
        {
            lli left=s-1,right=s+1,j=i-1,k=i+1;
            while(j>=0)
            {
                if(arr[j]==left)
                {
                    j--;
                }
                else
                {
                    break;
                }
                left--;
            }
            while(k<=n)
            {
                if(arr[k]==right)
                k++;
                else break;
                right++;
            }
            lli ans=0;
            if(left==0)
            ans = right-s;
            else if(right==n+1)
            ans=s-left;
            else
            ans=min(right-s,s-left);
            cout << ans << "\n";return;
        }
    }
    cout << 0 << "\n";
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




