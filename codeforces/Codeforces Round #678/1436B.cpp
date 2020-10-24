// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;


bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    if(isPrime(n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << 1 << " ";
            }
            cout << "\n";
        }
        return;
    }
    int val;
    for(int i=2;i<100000;i++)
    {
        if(i+n-1>0 && isPrime(i+n-1) && isPrime(i)==false){
            val=i;break;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) cout << val << " ";
            else
            cout << 1 << " ";
        }
        cout << "\n";
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




