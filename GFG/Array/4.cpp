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
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    while(count0>0)
    {
        cout << 0 << " ";
        count0--;
    }
    while (count1 > 0)
    {
        cout << 1 << " ";
        count1--;
    }
    while (count2 > 0)
    {
        cout << 2 << " ";
        count2--;
    }
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




