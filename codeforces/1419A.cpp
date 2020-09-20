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
    int n,num;
    cin >> n >> num;
    if ((n / 10) == 0)
    {
        if(num%2==0)
        {
            cout << 2 << "\n";return;
        }
        else
        {
            cout << 1 << "\n";return;
        }
    }
    int r=0,b=0;
    bool var;
    if(n%2==0) var=true;
    else var=false;
    while(num>0)
    {
        int x=num%10;
        if(var==true)
        {
            if(x%2!=0)
            b++;
        }
        else
        {
            if(x%2==0)
            r++;
        }
        num=num/10;
        var=!var;
    }
    if((n-(r+b))%2==0)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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




