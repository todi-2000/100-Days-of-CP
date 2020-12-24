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
    int o=0,e=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2)
            o++;
        else
            e++;
            sum+=arr[i];
    }
    if(sum%2)
    {
        cout << "YES" << "\n";return;
    }
    if(o==0 || e == 0)
    cout << "NO" << "\n";
    else
    {
        cout << "YES" << "\n";
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




