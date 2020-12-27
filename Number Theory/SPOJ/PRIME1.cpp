// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<bool>seive(100001,1);

void seive_prime()
{
    int maxN=100000;
    seive[0]=0;seive[1]=0;
    for(int i=2;i*i<=maxN;i++)
    {
        if(seive[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
                seive[j]=0;
        }
    }
}


void solve()
{
    //write your code here
    lli l,r;
    cin >> l >> r;
    vector<bool> arr(r - l + 1, 1);
    for(int i=2;i<=sqrt(r);i++)
    {
        if(seive[i])
        {
            int j=(l/i)*i;
            if(j<l) j+=i;
            for (; j <=r; j+=i)
            {
                if(j!=i)
                arr[j-l]=0;
            }
        }
    }
    // for(int i=0;i<prime.size();i++)
    // cout << prime[i] << " ";
    for(int i=0;i<r-l+1;i++)
    {
        if(arr[i] && l+i!=1)
        cout << l+i << "\n";
    }
    cout << '\n';
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
    seive_prime();
    while(t--)
    {
        solve();
    }
    return 0;
}




