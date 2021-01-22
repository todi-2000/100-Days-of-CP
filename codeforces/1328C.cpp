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
    int n;string c;
    cin >>n >> c;
    string a,b;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='2')
        {
            if(a>b)
            {
                a += '0';
                b+= '2';
            }
            else if(a<b)
            {
                a += '2';
                b += '0';
            }
            else
            {
                a += '1';
                b += '1';
            }
        }
        else if(c[i]=='1')
        {
            if(a>b){
                a += '0';
                b += '1';
            }
            else
            {
                a += '1';
                b += '0';
            }
        }
        else
        {
            a += '0';
            b += '0';
        }
    }
    cout << a << "\n" << b << "\n";
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




