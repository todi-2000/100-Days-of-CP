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
    vector<int>arr(n);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n>2)
    {
        for (int i=0;i<n-2;i++)
        {
            if(ans.size()%2==0)
            {
                if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 0)
                    continue;
                else if (arr[i] == 0 && arr[i + 1] == 1 && arr[i + 2] == 1)
                    continue;
                else
                    ans.push_back(arr[i]);
            }
            else
            {
                if(arr[i]-ans[ans.size()-1]==0)
                ans.push_back(arr[i]);
            }
        }
    }
    if(ans.size()%2==0)
    {
        if(arr[n-1]-arr[n-2]==0)
        {
            ans.push_back(arr[n-1]);
            ans.push_back(arr[n-2]);
        }
        else
        {
            ans.push_back(0);
        }
    }
    else
    {
        if(arr[n-2]-ans[ans.size()-1]==0)
        ans.push_back(arr[n-2]);
        if (arr[n - 1] - ans[ans.size() - 1] == 0)
        ans.push_back(arr[n-1]);
    }
    if(ans.size()==1 || ans.size()%2==0)
    {
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << "\n";
    }
     else
     {
         cout << ans.size()-1 << "\n";
         for (int i = 0; i < ans.size()-1; i++)
             cout << ans[i] << ' ';
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




