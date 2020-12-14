// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool is_prime[90000001];
vector<int>prime;

void seive()
{
    int maxN = 90000000;

    is_prime[0]=1;is_prime[1]=1;
    for(int i=2;i*i<=maxN;i++)
    {
        if(is_prime[i]==0)
        {
            for(lli j=i*i;j<=maxN;j+=i)
            {
                is_prime[j]=1;
            }
        }
    }
    for(int i=0;i<=maxN;i++)
    {
        if(is_prime[i]==0)
        {
            prime.push_back(i);
        }
    }
}


void solve()
{
   //write your code here
    int n;
    cin >> n;
    cout << prime[n-1] << "\n";
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
    seive();
    while(t--)
    {
        solve();
    }
    return 0;
}




