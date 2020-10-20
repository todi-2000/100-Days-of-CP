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
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int maxindex=-1,maxvalue=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxvalue)
        {
            if(i>0 && arr[i-1]<arr[i])
            {
                maxvalue=arr[i];maxindex=i;
            }
            if(i<n-1 && arr[i+1]<arr[i])
            {
                maxvalue = arr[i];
                maxindex = i;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<maxvalue)
        {
            cout << maxindex+1 << "\n";return;
        }
    }
    cout << -1 << "\n";
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




