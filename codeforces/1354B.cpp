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
    string s;
    cin >> s;
    vector<vector<int>>arr;
    int i=0;
    int count = 1;
    while(i<s.size()-1)
    {
        if(s[i]==s[i+1])
        count++;
        else
        {
            arr.push_back({s[i]-'0',count});
            count=1;
        }   
        i++;
    }
    arr.push_back({s[s.size()-1] - '0', count});
    int ans = INT_MAX,n=arr.size();
    vector<int>y={1,2,3};
    for(int i=0;i<n-2;i++)
    {
        // cout << arr[i][0] << " " << arr[i+1][0] << " " << arr[i+2][0] << " ";
        vector<int>x={arr[i][0],arr[i+1][0],arr[i+2][0]};
        sort(x.begin(),x.end());
        if(x==y)
        {
            int val = 1+ arr[i + 1][1]+1;
            ans=min(ans,val);
        }
    }
    if(ans==INT_MAX) ans=0;
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




