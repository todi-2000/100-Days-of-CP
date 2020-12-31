// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
#define ii pair<lli,lli>
# define mod 1000000007
using namespace std;
typedef long long int lli;

map<lli,lli>nprime;
lli total;
void prime_factor(lli n)
{
    total=1;
    for(lli i=2;i*i<=n;i++)
    {
        lli count = 0;
        if(n%i==0)
        {
            
            while(n%i==0)
            {
                count++;n/=i;
            }
        }
        nprime[i]=count;
        total*=(count+1);
    }
    if(n>0)
    {
        nprime[n]=1;
        total*=2;
    }
}

void solve()
{
    //write your code here
    lli n,q;
    cin >> n >> q;
    prime_factor(n);
    for(int i=0;i<q;i++)
    {
        lli t,k;
        cin >> t >> k;
        if(t==1)
        {
            lli ans=1;
            for(ii p:nprime)
            {
                lli count = p.second,countk=0;
                while(k % p.first == 0)
				countk++ , k /= p.first;
				ans *= min(countk , p.second) + 1;
            }
            cout << ans << "\n";
        }
        else
        {
            lli ans=1;
            for(ii p:nprime)
            {
                lli count=0;
                while(k % p.first == 0)
				    count++ , k /= p.first;
				if(count > p.second)
				{
					ans = 0;
					break;
				}
				ans *= (p.second - count + 1);
			}
			if(k > 1) ans = 0;
            if(t==2)
                cout << ans << "\n";
            else
            {
            cout << total-ans << "\n";}
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




