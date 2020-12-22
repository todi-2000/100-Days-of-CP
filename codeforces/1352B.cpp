// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    lli n,k;
    cin >> n >> k;
    if((n-k+1)%2!=0 && (n-k+1)>0)
    {
        cout << "YES" << "\n";
        for(int i=0;i<k-1;i++)
        cout << 1 << " ";
        cout << n-k+1 << "\n";
    }
    else if((n-2*(k-1))%2==0 && (n-2*(k-1))>0)
    {
        cout << "YES"
             << "\n";
        for (int i = 0; i < k - 1; i++)
            cout << 2 << " ";
        cout << n - 2*(k - 1)<< "\n";
    }
    else
    {
        cout << "NO" << "\n";
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




