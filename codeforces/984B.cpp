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
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                if(j-1>=0 && s[i][j-1]=='*')
                {
                    cout << "NO" << "\n";return;
                }
                if(j+1<m && s[i][j+1]=='*')
                {
                    cout << "NO"
                         << "\n";return;
                }
                if(i-1>=0 && s[i-1][j]=='*')
                {
                    cout << "NO"<< "\n";return;
                }
                if (i + 1 <n && s[i + 1][j] == '*')
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
                if (i - 1 >= 0 && j-1>=0 && s[i - 1][j-1] == '*')
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
                if (i - 1 >= 0 && j+1<m && s[i - 1][j+1] == '*')
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
                if (i + 1<n && j-1>=0 && s[i + 1][j - 1] == '*')
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
                if (i + 1 < n && j+1<m && s[i + 1][j + 1] == '*')
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
            else if(s[i][j]=='*')
                continue;
            else
            {
                int val=(s[i][j]-'0');
                int count=0;
                if (j - 1 >= 0 && s[i][j - 1] == '*')
                    count++;
                if (j + 1 < m && s[i][j + 1] == '*')
                {
                    count++;
                }
                if (i - 1 >= 0 && s[i - 1][j] == '*')
                {
                    count++;
                }
                if (i + 1 < n && s[i + 1][j] == '*')
                {
                    count++;
                }
                if (i - 1 >= 0 && j - 1 >= 0 && s[i - 1][j - 1] == '*')
                {
                    count++;
                }
                if (i - 1 >= 0 && j + 1 < m && s[i - 1][j + 1] == '*')
                {
                    count++;
                }
                if (i + 1 < n && j - 1 >= 0 && s[i + 1][j - 1] == '*')
                {
                    count++;
                }
                if (i + 1 < n && j + 1 < m && s[i + 1][j + 1] == '*')
                {
                    count++;
                }
                if(val!=count){
                cout << "NO" ;return;}
            }
        }
    }
    cout << "YES" << "\n";
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




