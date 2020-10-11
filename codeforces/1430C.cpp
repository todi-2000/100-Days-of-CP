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
   int n;
   cin >> n;
   if(n==2)
   {
       cout <<2 << "\n";
       cout <<1 << " " << 2 <<"\n";
       return;
    }
   int x=(n+(n-2))/2;
    for(int i=n-1;i>=1;i--)
    {
        if(i!=n-2)
            x = ceil((float)(x + i) / 2);
    }
    cout << x << "\n";
    int y = (n + (n - 2)) / 2;
    cout << n << " " << n-2 << "\n";
    for (int i = n-1; i >= 1; i--)
    {
        if(i!=n-2)
        {
            cout << y << " " << i << "\n";
            y = ceil((float)(y + i) / 2);
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




