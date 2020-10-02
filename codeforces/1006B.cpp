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
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    vector<int>newarr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        newarr[i]=arr[i];
    }
    sort(newarr.begin(),newarr.end());
    int sum=0;
    for(int i=n-1;i>=n-k;i--)
    {
        sum+=newarr[i];
    }
    cout << sum << "\n";
    vector<int>pos;
    for(int i=n-1;i>=n-k;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(newarr[i]==arr[j] && find(pos.begin(),pos.end(),j)==pos.end())
            {
                pos.push_back(j);
                break;
            }
        }
    }
    pos.push_back(-1);
    sort(pos.begin(),pos.end());
    pos[pos.size()-1]=n-1;
    // for (int i = 0; i < pos.size(); i++)
    //     cout << pos[i] << " ";
    for(int i=1;i<pos.size();i++)
        cout << pos[i]-pos[i-1] << " ";
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




