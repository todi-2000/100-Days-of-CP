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
    cin >> n;
    string s;
    cin >> s;
    vector<vector<int>>palindrome(n+1,vector<int>(n+1));
    for(int i=0;i<=1;i++)
    {
        for(int j=i;j<n+1;j++)
            palindrome[i][j]=1;
    }
    for(int i=2;i<n+1;i++)
    {
        for(int j=i;j<n+1;j++)
        {
            if(s[j-i]==s[j-1])
            {
                if(palindrome[i-2][j-1]==1)
                    palindrome[i][j]=1;
                else
                    palindrome[i][j]=0;
            }
            else
            palindrome[i][j]=0;
        }
    }
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j<n+1;j++)
        {
            if(palindrome[i][j]==1)
            {cout << i << "\n";return;}
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




