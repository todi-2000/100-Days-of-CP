// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli power(lli base, lli p)
{
    lli res = 1;
    while (p != 0)
    {
        if (p % 2 != 0)
        {
            res *= base;
            p--;
        }
        else
        {
            base *= base;
            p /= 2;
        }
    }
    return res;
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    vector<lli>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    for(int i=0;i<n;i++)
    {

        lli pre = power(2, floor(log(arr[i]) / log(2)));
        lli next=power(2, ceil(log(arr[i]) / log(2)));
        if (next>1000000000)
        {
            cout << pre << " ";
        }
        else if (abs(arr[i] - pre) <= abs(arr[i] - next))
            cout << pre << " ";
        else
            cout << next << " ";
    }
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




