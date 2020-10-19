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
    int n,m;
    cin >> n >> m;
    string s1;
    for(int i=0;i<200;i++) s1+='9';
    for (int i = 0; i < 199; i++)
        s1 += '0';
    cout << s1+'1' << "\n";
    string s2;
    for(int i=0;i<200;i++) s2+='9';
    cout << s2 << "\n";
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





