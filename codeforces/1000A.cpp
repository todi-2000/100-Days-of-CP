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
    map<string,int>old;
    map<string,int>newa;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        old[s]++;
    }    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        newa[s]++;
    }
    int val1=0,val2=0;
    for(auto i:old)
    {
        val1+=max(0,(i.second-newa[i.first]));
    }
    for (auto i : newa)
    {
        val2 += max(0,(i.second - old[i.first]));
    }
    cout << (int)((val1+val2)/2) << "\n";
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




