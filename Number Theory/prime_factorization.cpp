// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<lli> prime_factor(lli n)
{
    vector<lli>factor;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                factor.push_back(i);
                n/=i;
            }
        }
    }
    if(n>1)
    {
        factor.push_back(n);
    }
    return factor;
}

void solve()
{
   //write your code here
   int n;
   cin >> n;
   vector<lli>arr=prime_factor(n);
   for(int i=0;i<arr.size();i++)
   cout << arr[i] << " ";
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




