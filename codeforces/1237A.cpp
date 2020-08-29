// Question Link: https://codeforces.com/problemset/problem/1237/A
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
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num%2==0)
        cout << num/2 << "\n";
        else if(num%2!=0 && flag==true)
        {
            int ans=floor((float)num/2);
            cout << ans << "\n";
            flag=false;
        }
        else
        {
            int ans=ceil((float)num/2);
            cout << ans << "\n";
            flag=true;
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




