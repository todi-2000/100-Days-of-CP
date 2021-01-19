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
    int n;string b;
    cin >> n >> b;
    string a="1",c="";
    if(b[0]=='0') c+='1';
    else c+='2';
    for(int i=1;i<n;i++)
    {
        if(c[i-1]=='2')
        {
            if(b[i]=='1')
            {
                a+='0';
            }
            else
            {
                a+='1';
            }
            c+='1';
        }
        else if(c[i-1]=='0')
        {
            if(b[i]=='1')
            {
                c+='2';
                a+='1';
            }
            else
            {
                c+='1';
                a+='1';
            }
            
        }
        else
        {
            if(b[i]=='1')
            {
                a+='1';
                c+='2';
            }
            else
            {
                a+='0';
                c+='0';
            }
        }
    }
    cout << a << "\n";
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




