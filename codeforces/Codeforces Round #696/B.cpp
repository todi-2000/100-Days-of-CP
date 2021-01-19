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
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void solve()
{
    //write your code here
    lli d;
    cin >> d;
    lli m=d+1, i = 1, j = 1;
    while (i==1 || j==1)
    {
        /* code */
        if(isPrime(m))
        {
            if(i==1)
            {
                i=m;
                m+=d;
            }
            else
            {
                j=m;
                m+=d;
            }
        }
        else
        {
            m++;
        }
        
    }
    
    cout << i*j << "\n";
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




