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
    int n,c0,c1,h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    int count0=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') count0++;
        else
        {
            count1++;
        }
    }
    vector<int>ans;
    ans.push_back(count1 * c1 + count0 * c0);
    ans.push_back(h*count0+count1 * c1+count0*c1);
    ans.push_back(h * count1 + count1 * c0 + count0 * c0);
    cout << *min_element(ans.begin(),ans.end()) << "\n";
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




