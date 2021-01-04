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
    for(int i=0;i<n;++i)
        cin >> arr[i];
    sort(arr.begin(),arr.end());
    for(int i=1;i<=2048;i++)
    {
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            temp.push_back(i^arr[j]);
        }
        sort(temp.begin(),temp.end());
        if(arr==temp)
        {
            cout << i << "\n";
            return;
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




