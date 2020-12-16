// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

vector<bool> is_prime(1000001);
vector<int> pcount(1000001);

void sieve()
{
    int maxN = 1000000;
    for (int i = 0; i <= maxN; i++)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
                is_prime[j] = false;
        }
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i <= maxN; i++)
    {
        if (is_prime[i])
            count1++;
        if (is_prime[count1])
            count2++;
        pcount[i] = count2;
        // cout << pcount[i] << " ";
    }
}

void solve()
{
    //write your code here
    int l, r;
    cin >> l >> r;
    cout << pcount[r] - pcount[l - 1] << "\n";
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen ("A:/c++/inputf.in", "r", stdin);
    // freopen ("A:/c++/outputf.in", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
