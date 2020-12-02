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
    int so=0,sc=0,bo=0,bc=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        so++;
        else if (s[i] == ')' && so>sc)
            sc++;
        else if (s[i] == '[')
            bo++;
        else if (s[i] == ']' && bo>bc)
            bc++;
    }
    cout << min(so,sc)+min(bo,bc) << "\n";
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




