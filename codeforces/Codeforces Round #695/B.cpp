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
    vector<lli>hv;
    int count = 0;
    for(int i=1;i<n-1;i++)
    {
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
        count++;
        else
        {
            if(count!=0)
            hv.push_back(count);
            count = 0;
        }
    }
    if (count != 0)
        hv.push_back(count);
    if(hv.size()!=0){
    lli ma = *max_element(hv.begin(), hv.end());
    lli flag = 0, ans = 0;
    for (int i = 0; i < hv.size(); i++)
    {
        if (hv[i] == ma && flag == 0)
        {
            ans += max(lli(0), hv[i] - 3);
            flag = 1;
        }
        else
        {
            ans += hv[i];
        }
    }
    cout << ans << "\n";}
    else
    {
        cout << 0 << "\n";
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




