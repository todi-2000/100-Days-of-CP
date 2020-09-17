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
    vector<lli>balloons(n);
    for(int i=0;i<n;i++)
    cin >> balloons[i];
    int mi=*min_element(balloons.begin(),balloons.end());
    int flag=0;
    if(n==1)
    cout << -1 << "\n";
    else
    {
        int sum=0,idx=-1;
        for(int i=0;i<n;i++)
        {
            if(balloons[i]!=mi || (balloons[i]==mi && flag==1))
                sum += balloons[i];
            else
            {
                idx=i;
                flag=1;
            }
            
        }
            
        if(sum==balloons[idx])
            cout << -1 << "\n";
        else
        {
            cout << n-1 << "\n";
            for(int i=0;i<n;i++)
            {
                if(i!=idx)
                cout << i+1 << " ";
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




