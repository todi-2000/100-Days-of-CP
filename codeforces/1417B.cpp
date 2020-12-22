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
    lli n,T;
    cin >> n >> T;
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    vector<int>ans(n);
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(T%2==0 && arr[i]==(T/2))
        {
            if (!flag)
                ans[i] = 1;
            else
                ans[i] = 0;
            flag = !flag;
        }
        else if(2*arr[i]<T)
        ans[i]=1;
        else if(2*arr[i]>T)
        ans[i]=0;
    }
    for(int i=0;i<n;i++)
    cout << ans[i] << " ";
    cout << "\n";
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




