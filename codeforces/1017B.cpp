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
    string s,t;
    cin >> n >> s >> t;
    int count00=0,count10=0,count0=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && t[i]=='0')
        count00++;
        else if (s[i] == '1' && t[i] == '0')
        count10++;
        else if(s[i]=='0')
        count0++;
        else if(s[i]=='1')
        count1++;
    }
    int ans=0;
    ans+=(count1*count00);
    ans+=(count0*count10);
    ans+=(count00*count10);
    cout << ans ;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




