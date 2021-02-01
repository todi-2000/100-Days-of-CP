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
    if(n<2020)
    {
        cout << "NO" << "\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if((n-i)%2020==0)
        {
            int x= ((n-i)/2020)-i;
            if(x>=0){
            cout << "YES" << "\n";
            return;}
            else
            {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "NO" << "\n";
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




