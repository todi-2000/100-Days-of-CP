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
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int count=1;
    if(arr[n-1]>arr[n-2])
    {
        swap(arr[n-1],arr[n-2]);
        count--;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==0)
        continue;
        if(arr[i]>arr[i+1] && count>0)
        {
            swap(arr[i],arr[i+1]);
            count--;
        }
        lli mi = min(arr[i], arr[i + 1]);
        arr[i] -= mi;
        arr[i + 1] -= mi;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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




