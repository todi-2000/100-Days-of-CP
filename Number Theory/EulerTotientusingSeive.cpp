// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<lli>seive(1000001);

void etf()
{
    lli maxN=1000000;
    for(int i=1;i<=maxN;i++)
    seive[i]=i;
    for(int i=2;i<=maxN;i++)
    {
        if(seive[i]==i)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                seive[j]=(seive[j]/i)*(i-1);
            }
        }
    }
}


void solve()
{
   //write your code here
   int n;
   cin >> n;
   cout << seive[n] << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    etf();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




