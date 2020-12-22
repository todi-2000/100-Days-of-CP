// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli gcd(lli a,lli b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

vector<lli>factor(lli n)
{
    vector<lli>temp;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
            temp.push_back(i);
            if(n/i!=i)
            temp.push_back(n/i);
        }
    }
    sort(temp.begin(),temp.end());
    return temp;
}

void solve()
{
    //write your code here
    lli n,m;
    cin >> n >> m;
    vector<lli>arr(m);
    for(int i=0;i<m;i++)
    cin >> arr[i];
    lli g=0;
    for(int i=0;i<m;i++)
    {
        g=gcd(g,arr[i]);
    }
    if(g==1)
    {
        cout << n-1 << "\n";
    }
    else if(g%n==0)
    {
        cout << 0 << "\n";
    }
    else
    {
        vector<lli>fac=factor(g);
        lli ma;
        for(int i=fac.size()-1;i>=0;i--)
        {
            if(fac[i]<=n)
            {
                ma=fac[i];
                break;
            }
        }
        cout << n-ma << "\n"; 
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




