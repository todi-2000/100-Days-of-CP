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
    int x=log2(n);
    if(log2(n)!=int(log2(n)))
        x++;
    if(n<=16)
    {
        cout << n-3+x << "\n";
        for(int i=3;i<n;i++)
        {
            cout << i << " " << i+1 << "\n";
        }
        while(x)
        {
            cout << n << " " << 2 << "\n";
            x--;
        }   
    }
    else
    {
        int val=log2(n)/log2(16);
        if(log2(n)/log2(16)!=int(log2(n)/log2(16)))
        val++;
        cout << n+val << "\n";
        for(int i=3;i<n;i++)
        {
            if(i!=16)
            {
                cout << i << " " << i+1 << '\n';
            }
        }
        while(val)
        {
            cout << n << " " << 16 << "\n";
            val--;
        }
        for(int i=0;i<4;i++)
        {
            cout << 16 << " " << 2 << "\n";
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




