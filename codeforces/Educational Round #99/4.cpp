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
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int ans=0,val=0;
    if(n==1)
    {
        cout<<0 << "\n";
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            if(arr[i]>x){
            val++;x=arr[i];}
        }
        else if(arr[i]>arr[i+1])
        {
            if(arr[i]>x && arr[i+1]>=x)
            {
                lli temp=arr[i];
                arr[i]=x;
                val++;x=temp;
                ans+=val;
                val=0;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
            
        }
        // cout << ans << " ";
    }
    if (arr[n-1] < arr[n-2])
    {
        if (arr[n-1] > x)
        {
            arr[n-1] = x;
            val++;
            x = arr[n];
            ans += val;
        }
        else
        {
            cout << -1 << "\n";
            return;
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




