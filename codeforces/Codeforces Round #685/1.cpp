// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool isPrime(lli num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    if(n==1) cout << 0 << "\n";
    else if(n==2) cout << 1 << "\n";
    else if(n==3) cout << 2 << "\n";
    else
    {
        if(n%2==0)
        cout << 2 << "\n";
        else
        {
            cout << 3 << "\n";
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




