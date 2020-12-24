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
    vector<bool>x(n+1,0);
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    cin >> b[i];
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(x[b[i]]==1)
        cout << 0 << " ";
        else if(a[i]==b[i])
        {
            x[a[i]]=1;
            cout << 1 << " ";
        }
        else
        {
            int count=1;
            for(int j=i;j<n;j++)
            {
                if(a[j]==b[i])
                {
                    l=j;
                    x[a[j]]=1;
                    cout << count << " ";
                    break;
                }
                if(j>=l && x[a[j]]==0)
                count++;
                x[a[j]]=1;
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




