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
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    int countn=0,countp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0) countp++;
        else if(arr[i]<0) countn++;
    }
    cout << 1 << " " << arr[0] << "\n";
    countn--;
    if(countp>0)
    {
        cout << countp << " ";
        for(int i=n-countp;i<n;i++)
        cout << arr[i] << " ";
        cout << "\n";
        cout << countn+1 << " ";
        for(int i=1;i<1+countn;i++)
        cout << arr[i] << " ";
        cout << 0 << "\n";
    }
    else
    {
        cout << 2 << " ";
        for(int i=1;i<3;i++)
        cout << arr[i] << " ";
        cout << "\n";
        cout << n-3 << " ";
        for(int i=3;i<n;i++)
        cout << arr[i] << " ";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




