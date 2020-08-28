// Question Link:https://www.codechef.com/problems/CHEFSETC
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
    lli a,b,c,d;
    cin >> a >> b >> c >> d;
    lli count = 1<<4;
    vector<lli>num={a,b,c,d};
    for(int i=0;i<count;i++)
    {
        int sum=0,flag=0;
        for(lli j=0;j<4;j++)
        {
            lli f=1<<j;
            if(i&f)
            {
                sum+=num[j];
                flag=1;
            }
        }
        if(sum==0 && flag==1)
        {
            cout << "Yes" << "\n";
            return ;
        }
    }
    cout << "No" << "\n";
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




