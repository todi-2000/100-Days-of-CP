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
    vector<vector<lli>>mat(n,vector<lli>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];
    int pos=2,ans=0,pos2=0,ch=0;
    for(int i=1;i<n;i++)
    {
        if(mat[0][i]!=pos && i==1)
        {
            pos2++;ch++;
        }
        else if(mat[0][i]!=pos)
            ch++;
        else
        {
            if(ch!=0 && pos2!=0)
            {
                ans++;
                pos2=0;ch=0;
            }
            else if(ch!=0 && pos2==0)
                ans+=2,ch=0;
        }
        pos++;
    }
    if(ch!=0 && pos2!=0) ans++;
    else if(ch!=0 && pos2==0) ans+=2;
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




