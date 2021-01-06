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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        arr[i] = s[i]-'0';
    }
    vector<bool>flag(n,0);
    for(int j=0;j<n-1;j++)
    {
        if(j%2==0)
        {
            int x=0;
            for(int i=0;i<n;i+=2)
            {
                if(arr[i]%2==0 && flag[i]==0){
                    flag[i]=1;
                    x=1;break;
                }
            }
            if(x==0)
            {
                for (int i = 0; i < n; i += 2)
                {
                    if (flag[i] == 0)
                    {
                        flag[i] = 1;
                        x = 1;
                        break;
                    }
                }
            }
        }
        else
        {
            int x = 0;
            for (int i = 1; i < n; i += 2)
            {
                if (arr[i] % 2 != 0 && flag[i]==0)
                {
                    flag[i] = 1;
                    x = 1;
                    break;
                }
            }
            if (x == 0)
            {
                for (int i = 1; i < n; i += 2)
                {
                    if (flag[i] == 0)
                    {
                        flag[i] = 1;
                        x = 1;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i]==0)
        {
            // cout << arr[i] << " ";
            if(arr[i]%2)
            cout << 1 << "\n";
            else
            {
                cout << 2 << "\n";
            } 
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




