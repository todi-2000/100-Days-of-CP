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
    lli n,x,p,k;
    cin >> n >> x >> p >> k;
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    if(arr[p-1]==x)
    {
        cout << 0 << "\n";
        return;
    }
    lli small=0,big=0; 
    for(lli i=0;i<n;i++)
    {
        if(arr[i]<x)
            small++;
        else if(arr[i]>x)
        big++;
    }
    // cout << small << " " << big << "\n";
    if(small>=p)
    {
        if(small>=k && k<=p)
        {
            cout << small-p+1 << "\n";
        }
        else
        {
            cout <<-1 << "\n";
        }
    }
    else
    {
        if(k>n-big & k>=p)
        {
            cout << big-n+p << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
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




