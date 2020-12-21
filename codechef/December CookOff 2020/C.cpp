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
    string s;
    cin >> s;
    if(s.size()%2!=0)
    {
        cout << -1 << "\n";
    }
    else
    {
        int count1=0,count0=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            count0++;
            else
            {
                count1++;
            }
        }
        int n = s.size() / 2;
        if(max(count0,count1)==s.size())
        cout << -1 << "\n";
        else
        {
            lli x=max(count0,count1);
            cout << x-n << "\n";
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




