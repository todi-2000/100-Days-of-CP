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
    int count = 0,ans=0,flag=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (count != 0 && flag == 1)
            {    
                ans += count;
                count = 0;
            }
            else
                flag = 1;
        }
        else if (s[i] == '0' && flag != 0)
            count++;
    }
    cout << ans << "\n";
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




