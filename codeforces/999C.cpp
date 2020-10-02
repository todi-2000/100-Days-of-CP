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
    vector<int>count(26,0);
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
        count[s[i]-97]++;
    int idx=0;
    while(k>0)
    {
        if(idx<26 && count[idx]==0)
        idx++;
        if(count[idx]>0)
        {
            count[idx]--;
            k--;
        }
        
    }
    // for(int i=0;i<26;i++)
    // cout << count[i] << " ";
    string s1="";
    for(int i=n;i>=0;i--)
    {
        if(count[s[i]-97]>0)
        {
            s1+=s[i];
            count[s[i]-97]--;
        }
    }
    reverse(s1.begin(),s1.end());
    cout << s1 << "\n";
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
