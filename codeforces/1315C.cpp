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
    vector<int>b(n);
    vector<bool>flag(2*n);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        flag[b[i]-1]=1;
    }
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        a.push_back(b[i]);
        int x=0;
        for(int j=b[i]-1;j<2*n;j++)
        {
            if(flag[j]==0)
            {
                a.push_back(j+1);
                flag[j]=1;
                x=1;
                break;
            }
        }
        if(x==0)
        {
            cout << -1 << "\n";
            return;
        }
    }
    for(int i=0;i<2*n;i++)
    cout << a[i] << " ";
    cout << "\n";
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




