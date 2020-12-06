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
    vector<string>s(n);
    int count1=0;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='X')
            count1++;
        }
    }
    int val=count1/3;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if (s[i][j] == 'X')
            {
                if (s[i][j + 1] == 'X' && s[i][j + 2] == 'X')
                {
                    if (s[i][j] == 'X' && s[i + 1][j] == 'X' && s[i + 2][j] == 'X')
                    {
                        s[i][j] == 'O';
                        val--;
                    }
                    else
                    {
                        if ((i-1>=0 && s[i - 1][j + 1] == 'O') || s[i + 1][j + 1] == 'O')
                        {
                            s[i][j + 2] = 'O';
                            val--;
                        }
                        else
                        {
                            s[i][j + 1] = 'O';
                            val--;
                        }
                    }
                }
                else
                {
                    if (s[i + 1][j] == 'X' && s[i + 2][j] == 'X')
                    {

                        
                        if ((j-1>=0 && s[i + 1][j - 1] == 'O')|| s[i + 1][j + 1] == 'O')
                        {
                            s[i + 2][j] = 'O';val--;}
                        else
                            s[i + 1][j] = 'O';
                    }
                }
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        if (s[i][n - 2] == 'X' && s[i+1][n - 2] == 'X' && s[i+1][n - 2] == 'X')
        {
            s[i+2][n-2]='O',val--;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i][n - 1] == 'X' && s[i + 1][n - 1] == 'X' && s[i + 1][n - 1] == 'X')
        {
            if(s[i + 2][n - 2] == 'O')
            s[i+1][n-1]='O',val--;
            else
            s[i+2][n-1]='O',val--;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (s[n-2][i] == 'X' && s[n-2][i+1] == 'X' && s[n-2][i+2] == 'X')
        {
            s[n-2][i+2] = 'O',val--;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[n - 1][i] == 'X' && s[n - 1][i+1] == 'X' && s[n-1][i+2] == 'X')
        {
            if (s[n-2][i+2] == 'O')
                s[n-1][i+1] = 'O',val--;
            else
                s[n-1][i+2] = 'O',val--;
        }
    }
    cout << val << "\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << s[i][j];
        cout << "\n";
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




