// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

bool isPrime(lli n)
{

    if (n == 2)
        return true;
    for (lli i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(int t)
{
    //write your code here
    lli n;
    cin >> n;
    lli val = sqrt(n);
    vector<lli>arr;
    lli x=val;
    while(val>1 && arr.size()<=4)
    {
        if(isPrime(x))
        {
            arr.push_back(x);
        }
        x++;
    }
    val--;
    while (arr.size() <= 6)
    {
        if (isPrime(val))
        {
            arr.push_back(val);
        }
        val--;
    }
    sort(arr.begin(),arr.end());
    lli ans = 1; 
    for(int i=1;i<6;i++)
    {
        if(arr[i]*arr[i-1]<=n)
            ans = arr[i]*arr[i-1];
        else
        {
            break;
        }
         
    }
    cout << "Case #" << t << ": " << ans << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("A:/c++/inputf.in", "r", stdin);
    freopen("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}
