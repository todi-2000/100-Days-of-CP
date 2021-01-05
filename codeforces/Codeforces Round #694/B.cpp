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
    lli n,x;
    cin >> n >> x;
    vector<lli>arr(n);
    lli pos=INT_MAX,sum=0;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    vector<lli>newarr(n,0);
    for(lli i=0;i<n;i++)
    {
        if(arr[i]%x==0)
        {
            lli count = 0,y = arr[i];
            while(y%x == 0)
            {
                count++;
                y/=x;
            }
            newarr[i]=count;
        }
    }
    lli mi = *min_element(newarr.begin(),newarr.end());
    // cout << mi << "\n";
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(newarr[i]!=mi)
        {
            if(flag==0)
            sum+=(mi+1)*arr[i];
            else if(flag==1)
            {
                sum+=(mi)*arr[i];
            }
        }
        else if(newarr[i]==mi)
        {
            sum+=(mi)*arr[i];
            flag=1;
        }

    }
    cout << sum << "\n";
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




