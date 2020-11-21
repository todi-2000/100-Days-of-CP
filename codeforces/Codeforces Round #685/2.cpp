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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int j=0;j<q;j++){
        int l,r;
        cin >> l >> r;
        int flag=0;
        // cout << s[l-1] << " " << s[r-1] << "\n";
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[l-1])
            {
                cout << "YES" << "\n";flag=1;break;
            }
        }
        for (int i = r; i < n && flag==0; i++)
        {
            if (s[i] == s[r-1])
            {
                cout << "YES"
                     << "\n";flag=1;break;
            }
        }
        if(flag==0)
        cout << "NO" << "\n";
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




