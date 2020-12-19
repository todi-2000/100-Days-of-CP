// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b)
{
    if(b == 0)
    return a;
    return gcd(b,a%b);
}

void solve()
{
    //write your code here
    int n,q;
    cin >> n >> q;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    vector<int>first(n);
    first[0]=arr[0];
    vector<int>last(n);
    last[0]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        first[i]=gcd(arr[i],first[i-1]);
    }
    for(int i=n-2;i>=0;i--)
        last[n - i - 1] = gcd(arr[i], last[n - i - 2]); 
    reverse(last.begin(),last.end());
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int f,b;
        if(l==1) f=0;
        else
        f=first[l-2];
        if(r==n) b=0;
        else
        b=last[r];
        // cout << f << " " << b << " ";
        cout << gcd(f,b) << "\n";
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




